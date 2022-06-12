const int yellow_led = 13;
const int red_led = 12;
const int green_led = 11;

const int trig_pin = 7;
const int echo_pin = 6;

void setup() 
{
 pinMode(yellow_led,OUTPUT); 
 pinMode(red_led,OUTPUT);
 pinMode(green_led,OUTPUT);

 pinMode(trig_pin,OUTPUT);
 pinMode(echo_pin,INPUT);

 digitalWrite(red_led,HIGH);
 delay(500);
 digitalWrite(red_led,LOW); 
}

void loop() 
{
 digitalWrite(yellow_led,HIGH);
  
 digitalWrite(trig_pin,LOW);
 delay(2);
 digitalWrite(trig_pin,HIGH);
 delay(10);
 digitalWrite(trig_pin,LOW);

 int duration = pulseIn(echo_pin,HIGH);
 int distance = ((duration)*0.014)/2;

 if (distance > 0 && distance < 30)
 {
  digitalWrite(yellow_led,LOW);
  digitalWrite(red_led,HIGH);
  delay(5000);
  digitalWrite(red_led,LOW);
  digitalWrite(green_led,HIGH);
  delay(1000);
  digitalWrite(green_led,LOW);
  }
}
