int Happy_pin = 13; 
int Eat_pin = 12;
int CallDoctor_pin  = 8;    
int Drink_pin = 7;
int Toilet_pin = 4;
int Sad_pin= 2;

int dt  = 500;
void setup() {
  
  Serial.begin(9600);
  pinMode(Eat_pin, INPUT);
  pinMode(Happy_pin, INPUT);
  pinMode(Sad_pin, INPUT);
  pinMode(Drink_pin, INPUT);
  pinMode(Toilet_pin, INPUT);
  pinMode(CallDoctor_pin, INPUT);
  
  digitalWrite(Eat_pin, HIGH);
  digitalWrite(Happy_pin, HIGH);
  digitalWrite(Sad_pin, HIGH);
  digitalWrite(Drink_pin, HIGH);
  digitalWrite(Toilet_pin, HIGH);
  digitalWrite(CallDoctor_pin, HIGH);

}

void loop() {
 if(digitalRead(Eat_pin)==LOW){
    Serial.println(1);
 }

  if(digitalRead(Happy_pin)==LOW){
    Serial.println(2);
 }
  if(digitalRead(Sad_pin)==LOW){
    Serial.println(3);
 }

  if(digitalRead(Drink_pin)==LOW){
    Serial.println(4);
 }

  if(digitalRead(Toilet_pin)==LOW){
    Serial.println(5);
 }
  if(digitalRead(CallDoctor_pin)==LOW){
    Serial.println(6);
 }

 delay(dt);



}
