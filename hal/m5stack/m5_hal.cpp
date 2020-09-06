
// #include "touchpad/touchpad.h"

#ifdef USE_RTOS_SYSTICK
#include <cmsis_os.h>
#endif

#include <M5Core2.h>
#include "lvgl.h"

#ifndef DISP_H
#define DISP_H
#endif

/*********************
 *      INCLUDES
 *********************/
#include <stdint.h>
#include "lvgl.h"

/*********************
 *      DEFINES
 *********************/
#define TFT_HOR_RES 240
#define TFT_VER_RES 320

// #define TFT_EXT_FB		1		/*Frame buffer is located into an external SDRAM*/

static lv_disp_drv_t disp_drv;
static int16_t x1_flush;
static int16_t y1_flush;
static int16_t x2_flush;
static int16_t y2_fill;
static int16_t y_fill_act;
volatile uint32_t last_t;

void refr_monitor(uint32_t px, uint32_t t)
{
	last_t = t;
}

static bool touchpad_read(lv_indev_drv_t * drv, lv_indev_data_t *data);
static void touchpad_init(void);
static void tft_init(void);
static void tft_flush(lv_disp_drv_t * drv, const lv_area_t * area, lv_color_t * color_p);

void hal_setup(void)
{
  	// tft_init();
    M5.begin(true, true, true, true);
  	touchpad_init();

}

void tft_init(void)
{
	static lv_color_t disp_buf1[TFT_HOR_RES * 40];
	static lv_disp_buf_t buf;
	lv_disp_buf_init(&buf, disp_buf1, NULL, TFT_HOR_RES * 40);

	lv_disp_drv_init(&disp_drv);


	disp_drv.buffer = &buf;
	disp_drv.flush_cb = tft_flush;
  disp_drv.hor_res = TFT_HOR_RES;
  disp_drv.ver_res = TFT_VER_RES;
	// disp_drv.monitor_cb = refr_monitor;
	lv_disp_drv_register(&disp_drv);
}

static void tft_flush(lv_disp_drv_t * drv, const lv_area_t * area, lv_color_t * color_p)
{
  if(area->x2 < 0) return;
	if(area->y2 < 0) return;
	if(area->x1 > TFT_HOR_RES - 1) return;
	if(area->y1 > TFT_VER_RES - 1) return;

  int16_t act_x1 = area->x1 < 0 ? 0 : area->x1;
	int16_t act_y1 = area->y1 < 0 ? 0 : area->y1;
	int16_t act_x2 = area->x2 > TFT_HOR_RES - 1 ? TFT_HOR_RES - 1 : area->x2;
	int16_t act_y2 = area->y2 > TFT_VER_RES - 1 ? TFT_VER_RES - 1 : area->y2;

  x1_flush = act_x1;
	y1_flush = act_y1;
	x2_flush = act_x2;
	y2_fill = act_y2;
	y_fill_act = act_y1;
	uint16_t data = color_p->full;

  M5.Lcd.clear();
  M5.Lcd.drawBitmap((int16_t)x1_flush, (int16_t)y1_flush, (int16_t)(x2_flush - x1_flush + 1),
    (int16_t)(y2_fill - y1_flush + 1),&data);
}

void touchpad_init(void)
{

  lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.read_cb = touchpad_read;
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  lv_indev_drv_register(&indev_drv);
}

static bool touchpad_read(lv_indev_drv_t * drv, lv_indev_data_t *data)
{
	static int16_t last_x = 0;
	static int16_t last_y = 0;

	bool detected;
  detected = M5.Touch.ispressed();
	if(detected) {
	  TouchPoint_t touch = M5.Touch.getPressPoint();
		data->point.x = touch.x;
		data->point.y = touch.y;
		last_x = data->point.x;
		last_y = data->point.y;

		data->state = LV_INDEV_STATE_PR;
	} else {
		data->point.x = last_x;
		data->point.y = last_y;
		data->state = LV_INDEV_STATE_REL;
	}

	return false;
}


void hal_loop(void){
  int i = 1+1;
}