int light_Sensor = D7; //assigns integer light_Sensor as digital pin 7

void setup() 
{
  pinMode(light_Sensor, INPUT); //sets digital pin 7 as input
}

void loop() 
{
    int light_Level = digitalRead(light_Sensor); //assigns collected data as integer light_Level
    Particle.publish("light_Level", String::format("%d", light_Level), PRIVATE); //publishes sorted data to thingspeak
    delay(30000); //delay for 30 seconds
}

    