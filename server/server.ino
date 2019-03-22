    #include <SPI.h>                                          // Подключаем библиотеку  для работы с шиной SPI
#include <nRF24L01.h>                                     // Подключаем файл настроек из библиотеки RF24
#include <RF24Network.h>
#include <RF24.h> 
#include <SoftwareSerial.h>
SoftwareSerial RS485 (7, 6);
#define DIR 5
#define RadLed A0
#define WireLed A1
#define RSLed A2
#include <Wire.h>
#define THIS_ADDRESS 0x8
#define OTHER_ADDRESS 0x9
RF24           radio(9, 10);  
RF24Network network(radio);
int fan = 0;
boolean fanLi = false;
boolean L1 = false;
boolean L2 = false;    
boolean shkaf = false;     
int        data = 0; 
int        dataS = 0;
char serData = "";
String val ="";
int Rval = 0;
int preRval = 0;
String Sval = "";
String wareVal = "";
unsigned long IRdelay = 0;
boolean L3 = false; 
void setup(){


  SPI.begin();
  radio.begin();
  network.begin(/*channel*/ 90, /*node address*/ 01);


Serial.begin(115200);
RS485.begin (57600);
pinMode (DIR, OUTPUT);
pinMode (RadLed, OUTPUT);
pinMode (WireLed, OUTPUT);
pinMode (RSLed, OUTPUT);
digitalWrite (DIR, LOW);
 Wire.begin(THIS_ADDRESS);
 Wire.onReceive(receiveEvent);
}

void loop(){
 network.update();  
//serialParse();
while (network.available()) {
  digitalWrite(RadLed, HIGH);
    RF24NetworkHeader header;                               
    network.read(header,&Rval,sizeof(Rval)); 
  digitalWrite(WireLed, LOW);
  digitalWrite(RadLed, LOW);
  //serialParse();
  radioParse();
  } 
    

    


if (RS485.available()) {
  digitalWrite(RSLed, HIGH);
    char ch = RS485.read();
  //Wire.beginTransmission(8);
  //Wire.write(ch);       
  //Wire.endTransmission();    
    //val += char(ch);
    //Serial.print(ch);
  }else digitalWrite(RSLed, LOW);

radioParse();
parseWare();
}


void receiveEvent(int howMany){
 while (Wire.available() > 0){
   digitalWrite(WireLed, HIGH);
   char b = Wire.read();
   wareVal  +=b;
   Serial.print(wareVal);
   digitalWrite(WireLed, LOW);
 }
}
    
