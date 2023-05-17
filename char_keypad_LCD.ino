#include <LiquidCrystal.h> 
#include <Keypad.h> 
const byte ROWS = 4; 
const byte COLS = 4; 


char keys[ROWS][COLS] = {

  {'A','B','C','D'},

  {'E','F','G','H'},

  {'L','M','N','O'},

  {'P','Q','R','S'}


};


byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {13,12,11,10};
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
int i=0;
char arr[10];
Keypad keypad = Keypad (makeKeymap (keys),rowPins ,colPins, ROWS, COLS);

 void setup() {
 lcd.begin(16,2);
 } 

 void loop () {
char key = keypad.getKey();
  if (key) {
    lcd.clear();
    lcd.print("Key pressed:");
    lcd.setCursor(0, 1);
    lcd.print(key);
 }}
