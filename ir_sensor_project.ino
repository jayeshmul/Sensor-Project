int sensor = 10;
int led = 4;
int IRsensor;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
 {
  sensor = digitalRead(10);
  Serial.println(sensor);
  //delay(100);

  if (sensor == 0)
   {
    digitalWrite(led, HIGH);
    Serial.println("Sensor Detected");
    //delay(500);
  }
  else
   {
    digitalWrite(led, LOW);
    Serial.println("Not detected");
    //delay(500);
  }
}
