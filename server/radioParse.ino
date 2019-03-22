void radioParse(){
  if (Rval==5501){
    wiresend("IR01");
    Rval = 0;
  }
  if (Rval==5502){
    wiresend("IR02");
    Rval = 0;
  }
  if (Rval==5503){
    wiresend("IR03");
    Rval = 0;
  }
  if (Rval==5504){
    wiresend("IR04");
    Rval = 0;
  }
  if (Rval==5505){
    wiresend("IR05");
    Rval = 0;
  }
  if (Rval==5506){
    wiresend("IR06");
    Rval = 0;
  }
  if (Rval==5507){
    wiresend("IR07");
    Rval = 0;
  }
  if (Rval==5508){
    wiresend("IR08");
    Rval = 0;
  }
  if (Rval==5509){
    wiresend("IR09");
    Rval = 0;
  }
  if (Rval==5510){
    wiresend("IR00");
    Rval = 0;
  }
  if (Rval==5511){
    wiresend("IR0*");
    Rval = 0;
  }
  if (Rval==5512){
    wiresend("IR0#");
    Rval = 0;
  }
  if (Rval==5513){
    wiresend("IROK");
    Rval = 0;
  }
  if (Rval==5514){
    wiresend("IRLeft");
    Rval = 0;
  }
  if (Rval==5515){
    wiresend("IRRight");
    Rval = 0;
  }
  if (Rval==5516){
    wiresend("IRUP");
    Rval = 0;
  }
  if (Rval==5517){
    wiresend("IRDOWN");
    Rval = 0;
  }
  if (Rval==5550){
    wiresend("LSENS");
    Rval = 0;
  }
  if (Rval==5551){
    wiresend("RSENS");
    Rval = 0;
  }
  Rval = 0;
}
