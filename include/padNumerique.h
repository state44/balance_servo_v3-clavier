#include <Arduino.h>
#include <Keypad.h>

// clavier matriciel 4x4
#define ROWS     4 // four rows
#define COLS  4 // four columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {14, 13, 12, 11}; // GIOP19, GIOP18, GIOP5, GIOP17 connect to the row pins
byte colPins[COLS] = {10, 9, 8, 7};   // GIOP16, GIOP4, GIOP0, GIOP2 connect to the column pins

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);