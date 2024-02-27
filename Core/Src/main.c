// main.c with demo
// Updated and refactored Larry Kiser copyright 2021


// include project specific header files
#include "error_handler.h"
#include "SysClock.h"
#include "LED.h"
#include "UART.h"
#include "demo.h"
#include "project.h"
#include "printf.h"
#include <stdio.h>




int main(void){

//	// initialization code
	System_Clock_Init(); // set System Clock = 80 MHz
	LED_Init(LED_PIN);
	UART2_Init();
	run_project();

//	 print_systick();
	// use_header();
//	hello();
	// LED_Toggle(LED_PIN);
	// LED_Off(LED_PIN);
	// run_demo();
	// read_bytes();
	// readlines();
}

