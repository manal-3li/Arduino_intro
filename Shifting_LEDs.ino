#define LED0 0
#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
#define LED5 5
#define LED6 6
#define LED7 7

void setup() {
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
}

void loop() {
  digitalWrite(LED0,HIGH);
  delay(500);
   digitalWrite(LED0,LOW);
  delay(500);
   digitalWrite(LED1,HIGH);
  delay(500);
   digitalWrite(LED1,LOW);
  delay(500);
   digitalWrite(LED2,HIGH);
  delay(500);
   digitalWrite(LED2,LOW);
  delay(500);
   digitalWrite(LED3,HIGH);
  delay(500);
   digitalWrite(LED3,LOW);
  delay(500);

   digitalWrite(LED4,HIGH);
  delay(500);
   digitalWrite(LED4,LOW);
  delay(500);
   digitalWrite(LED5,HIGH);
  delay(500);
   digitalWrite(LED5,LOW);
  delay(500);
digitalWrite(LED6,HIGH);
  delay(500);
   digitalWrite(LED6,LOW);
  delay(500);
   digitalWrite(LED7,HIGH);
  delay(500);
   digitalWrite(LED7,LOW);
  delay(500);  
   
}