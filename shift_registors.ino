// ST_CP pin 12
const int latchPin = 10;
// SH_CP pin 11
const int clockPin = 11;
// DS pin 14
const int dataPin = 12;
 
void setup ()
{
  // Setup pins as Outputs
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

byte bin = 0b00000000;

void shiftWrite(int pin, int val) {
  if (val == 0) {
    bitClear(bin, pin);
  }

  if (val == 1) {
    bitSet(bin, pin);
  }
  refreshShift();
}

void setBin(byte newBin) {
  bin = newBin;
  refreshShift();
}

void refreshShift() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, bin);
  digitalWrite(latchPin, HIGH);
}
void loop() {
  // Your code here
}
