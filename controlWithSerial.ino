// Program to control the Arduino built-in led using the Serial Monitor  

void setup() {
  Serial.begin(9600); // communicate Serial with the Arduino     
  pinMode(13, OUTPUT); 
} 


void loop() {
  if (Serial.available()){
    // get the input from Serial Monitor
    int input = Serial.read();  
    // 1 is received as 49 in the Serial Monitor. So if receive 49, light the led
    if (input == 49) {
      digitalWrite(13, HIGH);
    // 0 is received as 48 in the Serial Monitor
    } else if (input == 48) {
      digitalWrite(13, LOW);
    }
    }
}



