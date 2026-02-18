
/*
Portable Air Monitoring System
Arduino Uno Version
Sensors: DHT22, MQ7, PMS5003
*/

#include <SoftwareSerial.h>
#include <DHT.h>

// =====================
// CONFIGURATION
// =====================

#define DHTPIN 2
#define DHTTYPE DHT22
#define MQ7PIN A0

#define PMS_RX 10
#define PMS_TX 11

DHT dht(DHTPIN, DHTTYPE);
SoftwareSerial pmsSerial(PMS_RX, PMS_TX);

unsigned char pmsData[32];

// =====================
// FUNCTIONS
// =====================

void readPMS(int &pm1, int &pm25, int &pm10) {
  if (pmsSerial.available() >= 32) {
    if (pmsSerial.read() == 0x42) {
      if (pmsSerial.read() == 0x4D) {
        pmsSerial.readBytes(pmsData, 30);
        pm1 = (pmsData[4] << 8) + pmsData[5];
        pm25 = (pmsData[6] << 8) + pmsData[7];
        pm10 = (pmsData[8] << 8) + pmsData[9];
      }
    }
  }
}

String calculateAQI(int pm25) {
  if (pm25 <= 50) return "Good";
  else if (pm25 <= 100) return "Moderate";
  else if (pm25 <= 200) return "Unhealthy";
  else return "Hazardous";
}

// =====================
// SETUP
// =====================

void setup() {
  Serial.begin(9600);
  pmsSerial.begin(9600);
  dht.begin();
  Serial.println("Portable Air Monitoring System Started...");
}

// =====================
// LOOP
// =====================

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int mq7Value = analogRead(MQ7PIN);
  float coLevel = map(mq7Value, 0, 1023, 0, 100);

  int pm1 = 0, pm25 = 0, pm10 = 0;
  readPMS(pm1, pm25, pm10);

  String aqiStatus = calculateAQI(pm25);

  Serial.println("-------- Air Data --------");
  Serial.print("Temperature: "); Serial.print(temperature); Serial.println(" C");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.println(" %");
  Serial.print("PM1.0: "); Serial.println(pm1);
  Serial.print("PM2.5: "); Serial.println(pm25);
  Serial.print("PM10: "); Serial.println(pm10);
  Serial.print("CO Level: "); Serial.print(coLevel); Serial.println(" ppm");
  Serial.print("AQI Status: "); Serial.println(aqiStatus);
  Serial.println("---------------------------");

  delay(5000);
}
