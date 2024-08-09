#include <avr/io.h>
#include "oled.h"

int main(void)
{
    i2c_init();
    init_OLED();
    oled_clear();
    oled_setcursor(0,0);
    oled_print("Hello World");
    oled_horizontalscroll(5,0); //first input argument is frames/speeed 2,3,4,5,25,64,128,256 ___2nd___direction(0,1)=(right,left)
    change_background(0); // 0 for black ,1 for white background
    //oled_verticalscroll(5,0); //first input argument is frames/speeed 2,3,4,5,25,64,128,256 ___2nd___direction(0,1)=(right,left)(horizontal)

    while(1)
    {


    }

    return 0;
}
