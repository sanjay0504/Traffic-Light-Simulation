const int pin_red = 16;
const int pin_blue = 17;

void setup() {
  pinMode(pin_red , OUTPUT);
  pinMode(pin_blue , OUTPUT);
 
}

void loop() {
  digitalWrite(pin_red, HIGH);
  delay(100);
  digitalWrite(pin_red, LOW);
  digitalWrite(pin_blue, HIGH);
  delay(100);
  digitalWrite(pin_blue , LOW);
 
  // put your main code here, to run repeatedly:

}
