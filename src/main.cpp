#include <Arduino.h>
#include <WiFi.h>
#include <padNumerique.h> 


uint8_t servoPin =1;


const char* ssid = "Albert";
const char* password = "state123";

void servo_up(void){

  for(int i=0; i<2000; i++){
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(900);
    digitalWrite(servoPin, LOW);
    delayMicroseconds(20000);
  }



  
}


void setup() {
 

  Serial.begin(115200);

  Serial.printf("Hello World!");
  
  // WiFi.begin(ssid, password);
  //   Serial.println("\nConnecting");

  //   while(WiFi.status() != WL_CONNECTED){
  //       Serial.print(".");
  //       delay(100);
  //   }

  //   Serial.println("\nConnected to the WiFi network");
  servo_up();
  

    
}

void loop() {
  Serial.print(keypad.getKey());
  delay(250);
  servo_up();

  
}

