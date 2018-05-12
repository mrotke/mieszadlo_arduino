#include "Arduino.h"
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#include "conf.h"

#include "conf.h"
#include "Input/InputManager.h"
#include "MenuSystem/Menu.h"
#include "MenuSystem/MenuItems/MenuMotor.h"
#include "MenuSystem/MenuItems/MenuBacklight.h"
#include "devices/Display/DisplayLCD.h"
#include "devices/MotorDriver/MotorDriver.h"
#include <RobotIRremote.h>
#include <RobotIRremoteInt.h>

DisplayLCD displayLCD = DisplayLCD();
MotorDriver motorDriver = MotorDriver();
MenuMotor menuMotor = MenuMotor(&displayLCD,&motorDriver);
MenuBacklight menuBacklight = MenuBacklight(&displayLCD);
InputManager inputManager = InputManager();
Menu menu = Menu();
IRrecv irRecv = IRrecv(IR_RECV_PIN);





void setup()
{
	Wire.begin();
	Serial.begin(9600);

	pinMode(LED_BUILTIN, OUTPUT);



	displayLCD.begin(LCD_COLS, LCD_ROWS);
	inputManager.init(&irRecv);
	displayLCD.clear();
	displayLCD.setBacklight(100);
//
	menu.addMenuItem(&menuMotor);
	menu.addMenuItem(&menuBacklight);
//
	inputManager.attachObserver(&menu);
// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{
	delay(10);
	inputManager.refresh();
//Add your repeated code here
}
