#include <Arduino.h>

// 实现的功能：
// 在串口助手上显示发送到PC端的字符串。
// 从PC端接收到的字符发送回PC端

void setup()
{
  Serial.begin(9600, SERIAL_8E2); // 配置串口
  Serial.print("Please enter a character : ");  // 通过串口发送
}

void loop()
{
  if (Serial.available()!=0)  // 判断串口是否接收到数据
  {
    char re = Serial.read();  // 串口读取数据
    Serial.println(re);   // 串口发送数据
  }
}