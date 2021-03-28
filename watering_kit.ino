// 1 Relay and pump Automatic Watering System

int IN1 = 2;
int Pin1 = A0;
float Value1 = 0;

void setup(){
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(Pin1, INPUT);
  digitalWrite(IN1, HIGH);
  delay(500);
}

void loop(){
  Serial.print("MOISTURE LEVEL:");
  Value1 = analogRead(Pin1);
  Serial.println(Value1);
  
  if(Value1<600)
  {
    digitalWrite(IN1, LOW);
  }
  
  else
  {
    digitalWrite(IN1, HIGH);
  }
 Serial.println();
 delay(1000);
}
