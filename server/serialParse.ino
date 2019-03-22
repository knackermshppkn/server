void serialParse(){
  if (Serial.available()){
  char d = Serial.read();
  Sval += d;
    //Serial.println(d);
  if (Sval.indexOf("fanPlita1") > -1)radioSend(2111, 02);
  if (Sval.indexOf("fanPlita2") > -1)radioSend(2112, 02);
  if (Sval.indexOf("fanPlita3") > -1)radioSend(2113, 02);
  if (Sval.indexOf("fanPlitaOFF") > -1)radioSend(2110, 02);
  if (Sval.indexOf("lighPlitaON") > -1)radioSend(2201, 02);
  if (Sval.indexOf("lighPlitaOFF") > -1)radioSend(2200, 02);
  if (Sval.indexOf("podsvShkaf1ON") > -1)radioSend(2101, 02);
  if (Sval.indexOf("podsvShkaf1OFF") > -1)radioSend(2100, 02);




  if (Sval.indexOf("lightGost1ON") > -1)radioSend(4411, 00);
  if (Sval.indexOf("lightGost2ON") > -1)radioSend(4421, 00);
  if (Sval.indexOf("lightGost3ON") > -1)radioSend(4431, 00);
  if (Sval.indexOf("lightGost4ON") > -1)radioSend(4441, 00);
  if (Sval.indexOf("lightGost5ON") > -1)radioSend(4451, 00);
  if (Sval.indexOf("lightGost6ON") > -1)radioSend(4461, 00);

  if (Sval.indexOf("lightGost1OFF") > -1)radioSend(4410, 00);
  if (Sval.indexOf("lightGost2OFF") > -1)radioSend(4420, 00);
  if (Sval.indexOf("lightGost3OFF") > -1)radioSend(4430, 00);
  if (Sval.indexOf("lightGost4OFF") > -1)radioSend(4440, 00);
  if (Sval.indexOf("lightGost5OFF") > -1)radioSend(4450, 00);
  if (Sval.indexOf("lightGost6OFF") > -1)radioSend(4460, 00);
  if (Sval.indexOf("lightAllOFF") > -1)radioSend(4400, 00);
  if (Sval.indexOf("lightAllON") > -1)radioSend(4499, 00);

  if (Sval.indexOf("lightKor1ON") > -1)radioSend(4501, 00);
  if (Sval.indexOf("lightKor1OFF") > -1)radioSend(4500, 00);
  
  
  
  
  
  }
  
  


}
