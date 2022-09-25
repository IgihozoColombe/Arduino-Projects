#include <SPI.h>
#include <MFRC522.h>
#include "DS1302.h"
#define RST_PIN 9 
#define SS_PIN 10 
#define ResetPin 7 
#define DataPin 6 
#define ClockPin 5
DS1302 rtc(ResetPin, DataPin, ClockPin); //Create a DS1302 object
MFRC522 mfrc522(SS_PIN, RST_PIN); 
MFRC522::MIFARE_Key key;
MFRC522::StatusCode card_status;
void setup(){
 Serial.begin(9600); 
 rtc.writeProtect(false); // turn off write protection
 rtc.halt(false); // clear the clock halt flag 
 /*
 rtc.time(t); is only used to set time. 
 Other times it will be commented out.
 The format for Time t() is t(year,month,date,hour,minutes,seconds,day)
 */

 t.yr, 
 t.mon, 
 t.date, 
 t.hr, 
 t.min, 
 t.sec
 ); // format the time into the character array
 return CurrentTime; // return the current time
}
