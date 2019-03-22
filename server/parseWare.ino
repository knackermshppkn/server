void parseWare(){
  if (wareVal.indexOf("fanPlita1") > -1){
    radioSend(2111, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("fanPlita2") > -1){
    radioSend(2112, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("fanPlita3") > -1){
    radioSend(2113, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("fanPlitaOFF") > -1){
    radioSend(2110, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("lighPlitaON") > -1){
    radioSend(2201, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("lighPlitaOFF") > -1){
    radioSend(2200, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("podsvShkaf1ON") > -1){
    radioSend(2101, 02);
    wareVal = "";
  }
  if (wareVal.indexOf("podsvShkaf1OFF") > -1){
    radioSend(2100, 02);
    wareVal = "";
  }




  if (wareVal.indexOf("lightGost1ON") > -1){
    radioSend(4421, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost2ON") > -1){
    radioSend(4411, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost3ON") > -1){
    radioSend(4451, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost4ON") > -1){
    radioSend(4441, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost5ON") > -1){
    radioSend(4451, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost6ON") > -1){
    radioSend(4461, 00);
    wareVal = "";
  }

  if (wareVal.indexOf("lightGost1OFF") > -1){
    radioSend(4420, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost2OFF") > -1){
    radioSend(4410, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost3OFF") > -1){
    radioSend(4450, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost4OFF") > -1){
    radioSend(4440, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost5OFF") > -1){
    radioSend(4450, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightGost6OFF") > -1){
    radioSend(4460, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightAllOFF") > -1){
    radioSend(4400, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightAllON") > -1){
    radioSend(4499, 00);
    wareVal = "";
  }

  if (wareVal.indexOf("lightKor1ON") > -1){
    radioSend(4501, 00);
    wareVal = "";
  }
  if (wareVal.indexOf("lightKor1OFF") > -1){
    radioSend(4500, 00);
    wareVal = "";
  }
   
  
}
