#include <DHT.h>

#define DHT_PIN 4
#define RELAY_PIN 11
#define RELAY_PIN2 13
#define moisture A3
#define buzzer 9



DHT dht(DHT_PIN, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(RELAY_PIN2,OUTPUT);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Error reading DHT sensor");
    return;
  }

  int ldr = analogRead(A0);
  Serial.print("Light: ");
  Serial.println(ldr);

  if(ldr<300){
    digitalWrite(RELAY_PIN2, LOW);
  } else {
    digitalWrite(RELAY_PIN2, HIGH);
  }

  int moist = analogRead(A3);
  Serial.print("Moisture: ");
  Serial.println(moist);
  if (moist>300){
   digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  ");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  if (humidity < 65) {
    digitalWrite(RELAY_PIN, HIGH);
  } else {
    digitalWrite(RELAY_PIN, LOW);
  }


  delay(2000);
  


}