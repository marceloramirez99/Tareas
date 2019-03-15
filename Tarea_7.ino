int b1 = 2;
int b2 = 4;
int b3 = 6;
int rojo = 8;
int verde = 10;
int azul = 12;
bool e1;
bool e2;
bool e3;

void setup() {
Serial.begin(9600);
pinMode(b1, INPUT_PULLUP);
pinMode(b2, INPUT_PULLUP);
pinMode(b3, INPUT_PULLUP);

pinMode(rojo, OUTPUT);
pinMode(verde, OUTPUT);
pinMode(azul, OUTPUT);
}

void loop() {
e1 = digitalRead(b1);
e2 = digitalRead(b2);
e3 = digitalRead(b3);

if(e1 == 0 && e2 == 1 && e3 == 1) {
digitalWrite(rojo, HIGH);
digitalWrite(verde, LOW);
digitalWrite(azul, LOW);
}
if(e1 == 1 && e2 == 0 && e3 == 1) {
digitalWrite(rojo, LOW);
digitalWrite(verde, HIGH);
digitalWrite(azul, LOW);
}
if(e1 == 1 && e2 == 1 && e3 == 0) {
digitalWrite(rojo, LOW);
digitalWrite(verde, LOW);
digitalWrite(azul, HIGH);
}
if(e1 == 1 && e2 == 0 && e3 == 0) {
digitalWrite(rojo, LOW);
digitalWrite(verde, HIGH);
digitalWrite(azul, HIGH);
}
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
