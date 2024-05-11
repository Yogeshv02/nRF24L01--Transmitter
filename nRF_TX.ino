//#include <nRF24L01.h>
//#include <printf.h>
//#include <RF24.h>
//#include <RF24_config.h>
//

//----------------------------
//nRF24L01 & DHT11 Transmitter
//----------------------------
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <DHT.h>
#include <Adafruit_BMP085.h>
#include <Wire.h>


//----------------------------------
RF24 radio(10, 9);
DHT dht(2, DHT11);
Adafruit_BMP085 bmp;
//----------------------------------
const uint64_t pipe1 = 0xF0F0F0F066;
//----------------------------------
struct sensor
{
  float temp;
  int   hum;
  float pre;
  byte  sensorNum;
};
sensor dht11_data;
//=============================================
void setup()
{
  dht.begin();
  bmp.begin();
  radio.begin();
  radio.openWritingPipe(pipe1);
  radio.setPALevel(RF24_PA_LOW);
  radio.setDataRate(RF24_250KBPS);
  radio.stopListening();
  //------------------------------
  dht11_data.sensorNum = 1;
}
//=============================================
void loop()
{
  delay(2000);
  dht11_data.temp = dht.readTemperature();
  dht11_data.hum = dht.readHumidity();
  dht11_data.pre = bmp.readPressure() / 100.0F;
  //-------------------------------------------
  radio.write(&dht11_data, sizeof(dht11_data));
}
