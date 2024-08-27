const int pin1 = 4,pin2 = 5,pin3 = 6,pin4 = 7;
const int switchPin1 = 0,switchPin2=1,switchPin3= 2,switchPin4 = 0;
int switchState1 = 0,switchState2 = 0,switchState3 = 0,switchState4 = 0;

void setup(){
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  pinMode(switchPin3, INPUT);
  pinMode(switchPin4, INPUT);
  Serial.begin(9600);
}
void loop()
{
  switchState1 = digitalRead(switchPin1);
  switchState2 = digitalRead(switchPin2);
  switchState3 = digitalRead(switchPin3);
  switchState4 = digitalRead(switchPin4);
  if(switchState1 == HIGH)
  {
    Serial.println('Forward');
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
  }
  if(switchState2 == HIGH)
  {
    Serial.println('Reverse');
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
  }
  if(switchState3 == HIGH)
  {
    Serial.println('Right');
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  }
  if(switchState4 == HIGH)
  {
    Serial.println('Left');
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
  }
  else
  {
    
    Serial.println('Stop');
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  
  }
}