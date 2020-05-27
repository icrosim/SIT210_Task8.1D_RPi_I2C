
#include <Wire.h>
const int ledPin = 13;
void setup() {
Wire.begin(0x8);
Wire.onReceive(recieveEvent);
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, LOW);

}
void recieveEvent(int howMany){
    while(Wire.available()){
        char c = Wire.read();
        digitalWrite(ledPin, c);
    }
}
void loop() {
delay(100);
}
