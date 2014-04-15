int datapin = 2; // DS
int clockpin = 3; // SHCP
int latchpin = 4; // SHCP

byte data = 0;

void setup() {
    pinMode(datapin, OUTPUT);
    pinMode(datapin, OUTPUT);
    pinMode(latchpin, OUTPUT);
}

void shiftWrite(int desiredPin, boolean desiredState)
{
  bitWrite(data, desiredPin, desiredState);
  shiftOut(datapin, clockpin, MSBFIRST, data);
  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);
}

void loop() {

  for ( int i = 0; i <= 3; i++ )
  {
    shiftWrite(i,HIGH);
    delay(100);
  }
  for(int i = 3; i >= 0; i--)
  {
    shiftWrite(i, LOW);
    delay(100);
  }
}

  

    
  
