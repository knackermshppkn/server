void radioSend(int dat, int ID){
  digitalWrite(RadLed, HIGH);
    RF24NetworkHeader header(/*to node*/ ID);                      // тут указываем на какое устройство отправляем данные
    network.write(header,&dat,sizeof(dat));
digitalWrite(RadLed, LOW);
Sval = "";
} 
