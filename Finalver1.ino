void setup() {
  Serial.begin(9600);  // 初始化串行通信，波特率为9600
}
void loop() {
  int sensorValue = analogRead(A0);  // 读取A0引脚的值
  Serial.println(sensorValue);       // 将读数发送到p5.js
  delay(100);  // 稍微延迟以避免发送太多数据
}
