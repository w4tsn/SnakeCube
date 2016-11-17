/*
 Name:		xyznake.ino
 Created:	11/17/2016 4:26:13 PM
 Author:	alex
*/

const short led = 10;
const short button = 8;
#define delay 100

void setup() {
	pinMode(button, INPUT);
	pinMode(led, OUTPUT);
}

void loop() {
	digitalWrite(led, !digitalRead(button));
	_delay_ms(delay);
}