const int SV = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(SV,INPUT);
  digitalWrite(SV,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.print("\n Digital:");
  Serial.print(digitalRead(SV));
  Serial.print("\n Xaxis:");
   Serial.print(map(analogRead(0),0,1023,0,225));
  Serial.print("\n Yaxis:");
  Serial.print(map(analogRead(1),0,1023,0,255));
  Serial.print("\n");
  delay(400);

 

}
