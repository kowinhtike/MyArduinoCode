#include <IRremote.h>
int RECV_PIN = 12;
IRrecv irrecv(RECV_PIN);
decode_results results;
String answer;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn(); 
}
  
void loop() {
if (irrecv.decode(&results)) {
//    Serial.println(results.value,DEC);
answer = results.value;
 Serial.println(answer);

//if( answer == "16197847"){
//  Serial.println("LED ON");
//}else{
//    Serial.println("LED OFF");
//}


    irrecv.resume();
  }
}
