int analogPin1=A0;
int analogPin2=A1;
int digitalPin=2;
int  x=0;
int y=0;
int sw=0;
void setup() {
 pinMode(analogPin1,INPUT);
 pinMode(analogPin2,INPUT);
 pinMode(digitalPin,INPUT_PULLUP);
 Serial.begin(9600);
}
void loop() {
  x=analogRead(analogPin1);
  y=analogRead(analogPin2);
  sw=digitalRead(digitalPin);
 
  Serial.print(y);
  Serial.print(",");
  Serial.print(x);
  Serial.print(",");
  Serial.println(sw);

  
  delay(100);
}