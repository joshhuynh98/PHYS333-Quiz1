void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // Use one mode at a time

  // 20%
  fanController(100, 400, 2);

  // 40%
  //fanController(200, 300, 4);

  // 75%
  //fanController(375, 125, 8);
}

void fanController(int on_time, int off_time, int pin) {
  digitalWrite(pin, HIGH);
  delayMicroseconds(on_time);
  digitalWrite(pin, LOW);
  delayMicroseconds(off_time);
}
