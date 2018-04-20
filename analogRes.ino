#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 5, 9, 10, 11, 12);

#define analogPin  A0 //the thermistor attach to 
#define beta 4090 //the beta of the thermistor

void setup()
{
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 1);

  lcd.print("Hello!");
  Serial.begin(9600);
  Serial.println("Serial intialized");
}

void loop()
{
  //read thermistor value 
  long a =1023 - analogRead(analogPin);
  Serial.println(a);
  //the calculating formula of temperature
  float tempC = beta /(log((1025.0 * 10 / a - 10) / 10) + beta / 298.0) - 273.0;
  float tempF = tempC + 273.15;
  // Print a message of "Temp: "to the LCD.
  // set the cursor to column 0, line 0
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  // Print a centigrade temperature to the LCD.
  lcd.print(tempC);
  // Print the unit of the centigrade temperature to the LCD.
  lcd.print("  C");
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print("Fahr: ");
  // Print a Fahrenheit temperature to the LCD.
  lcd.print(tempF);
  // Print the unit of the Fahrenheit temperature to the LCD.
  lcd.print(" F");
  delay(1000); //wait for 100 milliseconds
}