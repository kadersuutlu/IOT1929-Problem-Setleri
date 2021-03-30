#include <SPI.h>                        
#include <MFRC522.h>                   
#define k 4                        
#define y 3
MFRC522 rfid(10,9);            
byte kart[4] = {183,254,207,215};          


void setup() 
{
  Serial.begin(9600);                     
  SPI.begin();                            
  rfid.PCD_Init();                        
  pinMode(k,OUTPUT);
 pinMode(y,OUTPUT);    
}

void loop() 
{
        digitalWrite(y,0);
        digitalWrite(k,0);
  if ( ! rfid.PICC_IsNewCardPresent())    
    return;
  if ( ! rfid.PICC_ReadCardSerial())     
    return;

  if (rfid.uid.uidByte[0] == kart[0] &&     

    rfid.uid.uidByte[1] == kart[1] &&
    rfid.uid.uidByte[2] == kart[2] &&
    rfid.uid.uidByte[3] == kart[3] ) {
             Serial.print("İyi günler hoşgeldiniz! :)\n");
           digitalWrite(y,HIGH);
          delay(1000);
          digitalWrite(k,LOW);
    }

    else{                                
      Serial.println("Kartınız tanımlanamadı! :(");
        digitalWrite(k,1);
        digitalWrite(y,0);
        delay(2000);
    }
  rfid.PICC_HaltA();
}
