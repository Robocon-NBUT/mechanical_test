void setup() {
  // 设置引脚13为输出
  pinMode(13, OUTPUT);
}

void loop() {
  // 点亮L灯
  digitalWrite(13, HIGH);   
  delay(1000);                      
  digitalWrite(13, LOW);   
  delay(1000);               
}
