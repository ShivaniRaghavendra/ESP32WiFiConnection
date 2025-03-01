#include<WiFi.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // Set Wi-Fi mode to station (client)
  WiFi.mode(WIFI_STA);  // Disconnect any previously connected networks
  WiFi.disconnect();
  delay(100);
  Serial.println("Setup done...!");
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Scan Start");
  int ENC_TYPE_NONE;
  int n=WiFi.scanNetworks();
  Serial.println("Scan done");
  if(n==0)    // Check encryption type and print whether it's open or encrypted
  Serial.println("No Networks Found!");
  else
  {
  Serial.println(n); // Print number of networks found
  Serial.println("Network Found!");
  for(int i=0; i<n; i++)//++i // Loop through the networks
  {
    //Print SSID and RSSI for each network found
    Serial.print(i+1);
    Serial.print(": ");
    Serial.print(WiFi.SSID(i));
    Serial.print("(");
    Serial.print(WiFi.RSSI(i));  // Print RSSI (signal strength)
    Serial.print(")");
    Serial.println((WiFi.encryptionType(i)==ENC_TYPE_NONE)?" ":"*");
    delay(10);
  }
}
  Serial.println("");
  //Wait a bit before scanning again
  delay(5000);
  }
