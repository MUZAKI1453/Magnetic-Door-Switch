const int sensor = 4;
const int buzzer = 3;
int state; // 0 tertutup(low) & 1 terbuka(high)


void setup() {
  pinMode(sensor, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  state = digitalRead(sensor);
  Serial.println(state);
  if (state == HIGH){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
  } else {
    digitalWrite(buzzer, LOW);
  }
delay(200);
}
