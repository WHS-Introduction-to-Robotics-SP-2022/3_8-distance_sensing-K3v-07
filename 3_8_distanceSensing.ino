const int trigPin = 12;
const int echoPin = 13;

const int LED1 = A0;
const int LED6 = A5;
const int LED7 = 2;

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);
  
  pinMode(LED1 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}

void loop()
{
 digitalWrite(trigPin, LOW);
  delay(200);
  digitalWrite(trigPin, HIGH);
  delay(100);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
 


  if ( distance <= 42 )
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  
  {
  if ( distance <= 42 )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 49 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
  delay(100);
}
}
