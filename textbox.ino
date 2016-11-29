const int lightPIN = A0;
const int thresh = 100;

const int openIndicationLED = 2;

void setup() {
  Serial.begin(9600);
  pinMode(openIndicationLED, OUTPUT);
}

void loop() {
  int light = analogRead(lightPIN);
  Serial.print("Light Value: ");
  Serial.println(light);

  if ( light > thresh ) {
    digitalWrite(openIndicationLED, HIGH);
  } else {
    digitalWrite(openIndicationLED, LOW);
  }
  delay(250);
}
