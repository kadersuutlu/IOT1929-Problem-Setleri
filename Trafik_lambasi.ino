int ledK=2;
int ledS=3;
int ledY=4;
int ledler[]={ledK,ledS,ledY};

void setup()
{
  for(int sayac=0;sayac<3;sayac++){
    pinMode(ledler[sayac],OUTPUT);
  }
}

void loop()
{
  digitalWrite(ledK,HIGH);
  delay(10000);
  digitalWrite(ledS,HIGH);
  delay(10000);
  digitalWrite(ledK,LOW);
  digitalWrite(ledS,LOW);
  delay(2000);
  digitalWrite(ledY,HIGH);
  delay(5000);
  digitalWrite(ledY,LOW);
}
