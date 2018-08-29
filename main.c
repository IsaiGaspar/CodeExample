
#include <LEDs_and_SWs.h>
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"


int main(void) {
	
	ptrfunc_t prtLEDFunc[5] = {Color_Red, Color_Blue, Color_Green, Color_yellow, Color_white}; 
	Colors_t color_selector = RED;

	BOARD_InitBootPins();


    while(1) 
    	{

    	color_selector = Color_get_next_color();
    	prtLEDFunc[color_selector]();
		}
    return 0 ;
}
