char *blinky = {".-- .. ... -... .-.. --- -.-. -.-"};
// wisblock
uint8_t ix = 0, ln;

void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  ln = strlen(blinky);
}

void loop() {
  double DL = 400;
  uint8_t G = LOW, B = LOW;
  char c = blinky[ix++];
  if (ix == ln) ix = 0;
  if (c == '.') {
    DL = 200;
    G = HIGH;
  } else if (c == '-') {
    B = HIGH;
  }
  digitalWrite(LED_GREEN, G);
  digitalWrite(LED_BLUE, B);
  delay(DL);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_BLUE, LOW);
  delay(100);
}
