/*
* Using String object to store a string and printing it on Serial
* Author : Akshul
* Created On : 11 July 21

* Memory usage - 
Sketch uses 2858 bytes (8%) of program storage space.
Global variables use 280 bytes (13%) of dynamic memory
*/

String greeting = "Hello World"

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(greeting);
}
