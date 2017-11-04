// Board   HC-SR04
// GND     GND
// 5V      VCC
// D0      Trig
// D1      分压器输出，如下
// 默认的测距仪（rangefinder）测量距离是10cm到250cm. 超出这个范围显示为-1.
// 你可以改变这个距离范围，通过minCM和maxCM参数更改。例如：
// HC_SR04 rangefinder = HC_SR04(trigPin, echoPin, 5.0, 300.0);


#include <HC_SR04.h>

double cm = 0.0;
double inches = 0.0;

int trigPin = D0;      // 发送管脚
int echoPin = D1;      // 接受管脚

HC_SR04 rangefinder = HC_SR04(trigPin, echoPin);

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    cm = rangefinder.getDistanceCM();          // 得到距离（cm）
    Serial.println(cm);
    inches = rangefinder.getDistanceInch();    // 得到距离（inch）
    Serial.println(inches);
    delay(100);
}
