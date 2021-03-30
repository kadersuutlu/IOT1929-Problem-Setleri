int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int ledler[]={led1,led2,led3,led4,led5};

void setup()
{
  for(int sayac=0;sayac<5;sayac++){
    pinMode(ledler[sayac],OUTPUT);
  }
}

void loop()
{
    for(int i=0 ; i<5 ; i++){
      digitalWrite(ledler[i],HIGH);
      delay(500);
    }
    for(int sayac=5 ; sayac>=0 ; sayac--){
      digitalWrite(ledler[sayac],LOW);
      delay(500);
  }
}
