#include "lvgl.h"

#include "../lv_ex_conf.h"
#include "../lv_examples.h"

#ifdef M5STACK
  #include <Arduino.h>
  #include <Ticker.h>
  #include <app_hal.h>
  #include <M5Core2.h>
  #include <esp_log.h>
  #define LVGL_TICK_PERIOD 20
  Ticker tick; /* timer for interrupt handler */
#else
#include <app_hal.h>
#endif

#ifdef M5STACK
static void lv_tick_handler(void)
{

  lv_tick_inc(LVGL_TICK_PERIOD);
}
#endif

// #include "lv_demo_benchmark.h"

int main(void)
{
	lv_init();

	hal_setup();
  

	// lv_demo_benchmark();
  // lv_ex_get_started1();
  // lv_ex_get_started2();
  // lv_ex_get_started3();
  lv_demo_widgets();
  // lv_demo_printer();
  // lv_demo_keypad_encoder();
  // lv_demo_stress();

	hal_loop();
}

#ifdef M5STACK
void setup(){
esp_log_level_set("*", ESP_LOG_VERBOSE);
tick.attach_ms(LVGL_TICK_PERIOD, lv_tick_handler);
ESP_LOGV("MAIN","Setting up Main");
main();
}

void loop(){
  lv_task_handler();
}
#endif

