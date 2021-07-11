/*
* Using character array to store a string and printing it on Serial
* Author : Akshul
* Created On : 11 July 21

* Memory usage - 
Sketch uses 1494 bytes (4%) of program storage space.
Global variables use 264 bytes (12%) of dynamic memory
*/

char greeting[] = "Hello World"

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(greeting);
}
