
const int echoPin = 13;
const int trigPin = 6;
long duration;
int distanceCm, distanceInch;

void setup() {
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}
void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  //int distanciEmCetimetros = (ultrasonic.Ranging(CH));
  duration = pulseIn(echoPin, HIGH);
  distanceCm= duration*0.034/2;
  distanceInch = duration*0.0133/2;
  Serial.println(duration);
  delay(1000);
}