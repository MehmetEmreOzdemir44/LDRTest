#define LDR_PIN A0
#define LED1 10
#define LED2 11
#define LED3 12
#define LED4 13
int ldrDeger=0;


void setup() {
  
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
  ldrDeger=analogRead(LDR_PIN);
  
  Serial.print("LDR Deger : ");
  Serial.println(ldrDeger);
  if(ldrDeger<300)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
  else if(ldrDeger<500)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
  else if(ldrDeger<750)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
  else if(ldrDeger<900)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);

  }
  else
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
  }
}
