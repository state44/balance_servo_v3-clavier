#include <Arduino.h>
#include <WiFi.h>
#include <padNumerique.h> 



const char* ssid = "Albert";
const char* password = "state123";


void setup() {
 

  Serial.begin(115200);

  Serial.printf("Hello World!");
  
  WiFi.begin(ssid, password);
    Serial.println("\nConnecting");

    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(100);
    }

    Serial.println("\nConnected to the WiFi network");

    
}

void loop() {
  Serial.print(keypad.getKey());
  delay(250);
}

