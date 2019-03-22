void wiresend(String value){
  char buffer[32];
  value.toCharArray(buffer, 32);
  digitalWrite(WireLed, HIGH);
  Wire.beginTransmission(OTHER_ADDRESS);
  Wire.write(buffer);       
  Wire.endTransmission();
}
