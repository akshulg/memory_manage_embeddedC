/*
* Pin toggling without using if condition
* Author : Akshul
* Created On : 11 July 21

* Memory usage - 
Sketch uses 1734 bytes (5%) of program storage space.
Global variables use 249 bytes (12%) of dynamic memory
*/

#define LED 5
bool led_state = 0;  // initializing using bool as the variable will toggle between 1 and 0 only

void setup()
{
	pinMode(LED, OUTPUT);
	Serial.begin(9600);
}

void loop()
{    
	led_state = Serial.read();
	digitalWrite(LED, led_state);
}
