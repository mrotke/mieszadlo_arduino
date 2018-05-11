#include "Arduino.h"
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#include "Init/SystemInit.h"
#include "Input/InputManager.h"

//LiquidCrystal_PCF8574 lcd(0x27);  // set the LCD address to 0x27 for a 16 chars and 2 line display

//The setup function is called once at startup of the sketch
void setup()
{
	Wire.begin();
	Serial.begin(9600);
//	lcd.begin(16, 2); // initialize the lcd
	pinMode(LED_BUILTIN, OUTPUT);
	digitalWrite(LED_BUILTIN, LOW);
	SystemInit::systemInit();
// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{
	InputManager::getInstance()->refresh();
//Add your repeated code here
}
