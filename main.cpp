#include "mbed.h"
#include "Adafruit_TFTLCD_16bit_STM32.h"



DigitalOut led1(LED1);
DigitalOut led2(LED2);

Adafruit_TFTLCD_16bit_STM32 tft(LED2, 240, 320);
int main()
{
	tft.begin();
	tft.fillScreen(RED);

    while(1) {
        led1 = !led1;
        ThisThread::sleep_for(1000);
    }
}
/*
int main()
{
	tft.begin();
    tft.setRotation(1);

    while(1) {
        tft.fillScreen(RED);
        ThisThread::sleep_for(1000);
        tft.fillScreen(GREEN);
        ThisThread::sleep_for(1000);
        tft.fillScreen(BLUE);
        ThisThread::sleep_for(1000);
    }
}
*/

