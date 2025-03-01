#include<WiFi.h>
const char* ssid="Shivani";
const char* password="1234567@";
int led=4;
void setup(void) {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.print("");
  Serial.println("WiFi Connected");
  Serial.println(WiFi.localIP());
  digitalRead(WiFi.status());
}

void loop() {
  // put your main code here, to run repeatedly:
  if(WiFi.status()!=WL_CONNECTED)
  {

    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
  }
  else
  {
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
  }
}
