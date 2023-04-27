const int echoPin = 12;
const int trigPin = 6;
const int ledPin = 13;
long duration;
int distanceCm, distanceInch;

void setup() {
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm= duration*0.034/2;
  distanceInch = duration*0.0133/2;
  Serial.println(distanceCm);
  delay(1000);
  if(distanceCm < 100){
      digitalWrite(ledPin,HIGH);
  }else{
      digitalWrite(ledPin,LOW);
  }
}