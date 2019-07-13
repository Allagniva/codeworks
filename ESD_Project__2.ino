#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
char auth[]=" Blynk Authentation Key ";
char ssid[]=" Wifi Name ";
char pass[]=" Wifi Password ";
//int IR=D4;
int L1=D1;
int L2=D0;
void setup() 
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);   
}

void loop() 
{
  
  Blynk.run();
  //digitalWrite(L1, HIGH); 
  //Blynk.virtualWrite(V0,a);
  //if(a==0)
  //{
  // Blynk.notify("Ghost is here"); 
  //}
}
