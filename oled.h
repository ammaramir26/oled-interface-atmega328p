#ifndef OLED_H_INCLUDED
#define OLED_H_INCLUDED

#include<stdbool.h>
#include <avr/io.h>
#include <util/delay.h>
void i2c_init(void);
void i2c_start(void);
void i2c_stop(void);
void i2c_write(unsigned char data);
void oled_command(char cmnd);
void oled_data(char data);
void init_OLED(void);
void oled_print_char(char c);
void oled_print(char *str);
void oled_clear(void);
void oled_setcursor(uint8_t row, uint8_t col);
void oled_horizontalscroll(uint16_t frames,bool direction);
void oled_verticalscroll(uint16_t frames,bool direction);//frames/speeed 2,3,4,5,25,64,128,256 ______direction(0,1)=(right,left)
void change_background(bool a); //inverse display

#endif // OLED_H_INCLUDED
