#include "mbed.h"

DigitalOut led1(PA_5); // Adjust this pin number for your board
DigitalOut led2(PB_0); // Adjust this pin number for your board

Ticker ticker_led1;
Ticker ticker_led2;

void toggle_led1() {
led1 = !led1;
}

void toggle_led2() {
led2 = !led2;
}

int main() {

ticker_led1.attach(&toggle_led1, 2.0); // Toggle LED1 every 2 seconds
ticker_led2.attach(&toggle_led2, 5.0); // Toggle LED2 every 5 seconds

while (true) {
ThisThread::sleep_for(chrono::milliseconds(100));
}
}

