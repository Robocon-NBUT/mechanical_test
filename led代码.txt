void setup() {
  // 设置引脚13为输出
  pinMode(13, OUTPUT);
}
void loop() {
  // 点亮L灯
  digitalWrite(13, HIGH);   // 开启LED
  delay(1000);                       // 延迟1秒
  digitalWrite(13, LOW);    // 关闭LED
  delay(1000);                       // 延迟1秒
}