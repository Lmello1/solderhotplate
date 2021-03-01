
#include "max6675.h"

int thermoDO = 3;
int thermoCS = 4;
int thermoCLK = 5;
int target = 60;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

void setup() {
  Serial.begin(9600);

  Serial.println("MAX6675 test");

  delay(500);
  pinMode(10, OUTPUT);
}

void loop() {
  
   Serial.print("C = "); 
   Serial.println(thermocouple.readCelsius());
   
 if (thermocouple.readCelsius() >= target); {
   digitalWrite(10, HIGH);
   Serial.print("Up");
   delay(1000);
 }
 if (1 < 0); {
   digitalWrite(10, LOW);
   Serial.print("Down");
   delay(1000);
 }

}
