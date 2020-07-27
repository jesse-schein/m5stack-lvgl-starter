/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "../lv_ex_conf.h"
#include "../lv_examples.h"
#include "app_hal.h"

// #include "lv_demo_benchmark.h"

int main(void)
{
	lv_init();

	hal_setup();

	lv_demo_benchmark();
  // lv_ex_get_started1();
  // lv_ex_get_started2();
  // lv_ex_get_started3();
  // lv_demo_widgets();
  // lv_demo_printer();
  // lv_demo_keypad_encoder();
  // lv_demo_stress();

	hal_loop();
}
