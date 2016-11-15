#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>

const char* ssid = "yourssid";
const char* password = "yourpass";
const char* auth = "generatedbyblynkapp";
const unsigned char blynk_server_ip[4] = {192, 168, 2, 104}; /* blynk local server IP address */

void setup(void) {
  Blynk.begin(auth, ssid, password, IPAddress(blynk_server_ip[0], blynk_server_ip[1], blynk_server_ip[2], blynk_server_ip[3])); 
}
 
void loop(void) {
    Blynk.run();
}
