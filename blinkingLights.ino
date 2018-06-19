
/* 
Write a program that causes the built-in LED connected to pin 13 on the Arduino to blink,
alternating between fast blinks and slow blinks. The LED should blink 5 times, once every half second,
and then it should blink 5 more times, once every two seconds. 
The LED should continue to blink in this alternating fashion for as long as the Arduino receives power.
*/

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  for (int i = 0; i < 5; i++) {
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
  }
}

