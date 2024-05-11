# nRF24L01-Transmitter
This Arduino code is designed to transmit temperature, humidity, and pressure data from a DHT11 sensor and BMP085 sensor via an nRF24L01 transceiver module.

**Hardware Requirements**
- Arduino Nano
- nRF24L01 transceiver module
- DHT11 sensor
- BMP180 sensor (or any other compatible sensor for pressure)
- Connecting wires
  
**Libraries Used**
- SPI: Arduino SPI library for communication with SPI devices.
- nRF24L01: Library for controlling the nRF24L01 transceiver module.
- DHT: Library for interfacing DHT11 or DHT22 humidity and temperature sensors.
- Adafruit_BMP085: Library for interfacing BMP085/BMP180 pressure sensors.
- Wire: Arduino Wire library for I2C communication.

**Installation**
- Install the necessary libraries mentioned above.
- Connect the nRF24L01 module, DHT11 sensor, BMP180 sensor, and Arduino nano as per the wiring described in the code.

**Setup**
- Upload the code to the Arduino nano.
- Ensure that the correct pins for the nRF24L01 module, DHT11 sensor, and BMP180 sensor are configured in the code (pipe1, DHT_PIN, BMP085_PIN, etc.).
- Power up the setup to 5V.

**Operation**
- The Arduino reads temperature, humidity, and pressure data from the DHT11 sensor and BMP180 sensor.
- It then transmits this data via the nRF24L01 transceiver module.
- The data is sent in a structured format containing temperature, humidity, pressure, and a sensor number.
- Ensure that there is a compatible receiver set up to receive and interpret the transmitted data.

**Additional Notes**
- Make sure to adjust the code according to your specific sensor pins and setup if necessary.
- Ensure proper power supply and wiring connections to avoid any hardware issues.
- This code assumes the use of a DHT11 sensor for temperature and humidity and a BMP085 sensor for pressure. Modify the code accordingly if using different sensors.
- Check the compatibility of the sensors with the provided libraries.
