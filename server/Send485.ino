void Send485(int a){
  digitalWrite(RSLed, HIGH);
  digitalWrite (DIR, HIGH);
  RS485.write(a);
  digitalWrite (DIR, LOW);
  digitalWrite(RSLed, LOW);
}
