// creating an led that breathes ala apple's laptops http://1.usa.gov/LeCBpl
// using a 220 ohm resistor

int ledPin = 3;
int x = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int outVal = yforx(x);
  analogWrite(ledPin, outVal);
  delay(18); // modify the pace of breathing
  x++;
}

int yforx(int x) {
  return (-240*abs(sin(x*0.01)))+255; //sine wave
}

