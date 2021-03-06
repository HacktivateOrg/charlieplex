/* Charliplexing 6 LEDs
---------------------------------------------------------------------------------
*/

const int PIN_1 = 13;     //LED row 1
const int PIN_2 = 12;     //LED row 2    
const int PIN_3 = 11;     //LED row 3
const int PIN_4 = 10;     //LED row 4
const int PIN_5 = 9;     //LED row 5
const int tStep = 500;

void low(int pin) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
}

void high(int pin) {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);  
}

void off(int pin) {
  pinMode(pin, INPUT);
}

void L1() {
  off(PIN_4);
  off(PIN_3);
  high(PIN_1);
  low(PIN_2);
  off(PIN_5);
}  

void L2() {
  off(PIN_4);
  off(PIN_3);
  high(PIN_2);
  low(PIN_1);
  off(PIN_5);
}  

void L3() {
  off(PIN_4);
  off(PIN_2);
  high(PIN_1);
  low(PIN_3);
  off(PIN_5);
}  

void L4() {
  off(PIN_4);
  off(PIN_2);
  high(PIN_3);
  low(PIN_1);
  off(PIN_5);
}  

void L5() {
  off(PIN_4);
  off(PIN_1);
  high(PIN_2);
  low(PIN_3);
  off(PIN_5);
}  

void L6() {
  off(PIN_4);
  off(PIN_1);
  high(PIN_3);
  low(PIN_2);
  off(PIN_5);
}  

void L7() {
  high(PIN_4);
  off(PIN_3);
  off(PIN_2);
  low(PIN_1);
  off(PIN_5);
}

void L8 () {
  low(PIN_4);
  off(PIN_3);
  off(PIN_2);
  high(PIN_1);
  off(PIN_5);
}

void L9 () {
  low(PIN_4);
  off(PIN_3);
  high(PIN_2);
  off(PIN_1);
  off(PIN_5);
}

void L10 () {
  high(PIN_4);
  off(PIN_3);
  low(PIN_2);
  off(PIN_1);
  off(PIN_5);
}

void L11 () {
  high(PIN_4);
  low(PIN_3);
  off(PIN_2);
  off(PIN_1);
  off(PIN_5);
}

void L12 () {
  low(PIN_4);
  high(PIN_3);
  off(PIN_2);
  off(PIN_1);
  off(PIN_5);
}

void L13 () {
  high(PIN_5);
  off(PIN_4);
  off(PIN_3);
  off(PIN_2);
  low(PIN_1);
}

void L14 () {
  low(PIN_5);
  off(PIN_4);
  off(PIN_3);
  off(PIN_2);
  high(PIN_1);
}
  
void lowall() {
  low(PIN_1);
  low(PIN_2);
  low(PIN_3);
  low(PIN_4);
}

void setup() 
{
}

void loop()
{
  
  L1();
  delay(tStep);
  L2();
  delay(tStep);
  L3();
  delay(tStep);
  L4();
  delay(tStep);
  L5();
  delay(tStep);
  L6();
  delay(tStep);
  L7();
  delay(tStep);
  L8();
  delay(tStep);
  L9();
  delay(tStep);
  L10();
  delay(tStep);
  L11();
  delay(tStep);
  L12();
  delay(tStep);
  L13();
  delay(tStep);
  L14();
  delay(tStep);
}
