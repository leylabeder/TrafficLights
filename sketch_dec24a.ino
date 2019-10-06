 int buton=0;
  int sayici=0;
  int n;
#include <ESP8266WiFi.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"
/************************* WiFi Access Point *********************************/
#define WLAN_SSID "iPhone"
#define WLAN_PASS "beder873"
/************************* Adafruit.io Setup *********************************/
#define AIO_SERVER "io.adafruit.com"
#define AIO_SERVERPORT 1883 // use 8883 for SSL
#define AIO_USERNAME "leylabeder"
#define AIO_KEY "cde20ea56b604e4ab07db1ad2fd39628"
/************ Global State (you don't need to change this!) ******************/
// Create an ESP8266 WiFiClient class to connect to the MQTT server.
WiFiClient client;
 
void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {

 n=0;
while(n<10)
{
  digitalWrite(5,HIGH);
  buton=digitalRead(13);
  if(buton==1)
  {
    Serial.println("Yanıyor");
    sayici=1;
    }
  if(n==2)
  {
    digitalWrite(2,HIGH);
    delay(5);
    sayici=0;
    n=n+5;
    
    }
    digitalWrite(2,LOW);
    delay(100);
    n=n+1;
  }
  n=0;
  digitalWrite(5,LOW);
  while(n<10)
  {
    digitalWrite(4,HIGH);
    buton=digitalRead(13);
    if(buton==1)
    {
      Serial.println("Yanıyor");
      sayici=1;
      }
      delay(100);
      n=n+1;
    }
    n=0;
    digitalWrite(4,LOW);
    while(n<10)
    {
      digitalWrite(0,HIGH);
      buton=digitalRead(13);
      if(buton==1)
      {
        Serial.println("Yanıyor");
        sayici=1;
        }
        delay(100);
        n=n+1;
      
      }
      n=0;
      digitalWrite(0,LOW);
  // put your main code here, to run repeatedly:

}
