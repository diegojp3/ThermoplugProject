#include <ArduinoJson.h>
#include "max6675.h"

// temperature sensor 1
int soPin1 = 2;// SO=Serial Out
int csPin1 = 3;// CS = chip select CS pin
int sckPin1 = 4;// SCK = Serial Clock pin

MAX6675 robojax1(sckPin1, csPin1, soPin1);// create instance object of MAX6675

// temperature sensor 2
int soPin2 = 5;// SO=Serial Out
int csPin2 = 6;// CS = chip select CS pin
int sckPin2 = 7;// SCK = Serial Clock pin

MAX6675 robojax2(sckPin2, csPin2, soPin2);// create instance object of MAX6675

//temperature sensor 3
int soPin3 = 8;// SO=Serial Out
int csPin3 = 9;// CS = chip select CS pin
int sckPin3 = 10;// SCK = Serial Clock pin

MAX6675 robojax3(sckPin3, csPin3, soPin3);// create instance object of MAX6675

//temperature sensor 4
int soPin3 = 11;// SO=Serial Out
int csPin3 = 12;// CS = chip select CS pin
int sckPin3 = 13;// SCK = Serial Clock pin

MAX6675 robojax4(sckPin4, csPin4, soPin4);// create instance object of MAX6675


void setup() {
  // Initialize Serial port
  Serial.begin(9600);
  Serial.println("Robojax MAX6675"); 
}

void loop() {

int time = 0;

  Serial.print("T1 = "); 
  Serial.println(robojax1.readCelsius());
  Serial.print("T2 = ");
  Serial.println(robojax2.readCelsius());
  Serial.print("T3 = "); 
  Serial.println(robojax3.readCelsius());
  Serial.print("T4 = ");
  Serial.println(robojax4.readCelsius());

// data is printed as decimal
  delay(1000);
  
  //use realterm for CSV print
}
