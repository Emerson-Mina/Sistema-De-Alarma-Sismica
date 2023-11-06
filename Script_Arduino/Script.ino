#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

#define ADXL345_RANGE_2_G 0x00  

#define REFERENCE_ACCELERATION 9.81  
#define SCALE_FACTOR 0.5             

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);
int ledPinr = 9;
int ledPina = 8;
const int pinBuzzer = 10;
void setup(void) {
  Serial.begin(9600);
  if (!accel.begin()) {
    Serial.println("Impossibile trovare il sensore ADXL345");
    while (1)
      ;
  }
  accel.setRange(ADXL345_RANGE_2_G);  
}

void loop(void) {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPina, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);

  sensors_event_t event;
  accel.getEvent(&event);
  float acceleration = sqrt(event.acceleration.x * event.acceleration.x + event.acceleration.y * event.acceleration.y + event.acceleration.z * event.acceleration.z);
  float magnitude = log10(acceleration / REFERENCE_ACCELERATION) / SCALE_FACTOR;



  if (magnitude >= 0.03 && magnitude <= 0.09) {
    Serial.print("Magnitudo inferiore a 1:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(pinBuzzer, HIGH); 
    digitalWrite(ledPina, LOW);
      delay(2000);

  } else if (magnitude >= 0.10 && magnitude <= 0.19) {
    Serial.print("Magnitudo 1:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

      
  } else if (magnitude >= 0.20 && magnitude <= 0.29) {
    Serial.print("Magnitudo 2:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

    
  } else if (magnitude >= 0.30 && magnitude <= 0.39) {
    Serial.print("Magnitudo 3 :");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 0.40 && magnitude <= 0.49) {
    Serial.print("Magnitudo 4:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 0.50 && magnitude <= 0.59) {
    Serial.print("Magnitudo 5:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
     delay(2000);

  } else if (magnitude >= 0.60 && magnitude <= 0.69) {
    Serial.print("Magnitudo 6:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 0.70 && magnitude <= 0.79) {
    Serial.print("Magnitudo 7:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 0.80 && magnitude <= 0.89) {
    Serial.print("Magnitudo 8:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 0.90 && magnitude <= 0.99) {
    Serial.print("Magnitudo 9 :");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 1.00 && magnitude <= 1.09) {
    Serial.print("Magnitudo 10:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else if (magnitude >= 1.10 && magnitude <= 1.19) {
    Serial.print("Magnitudo 11:");
    float resultado =magnitude * 10;
    Serial.println(resultado);    
    digitalWrite(ledPinr, HIGH);
    digitalWrite(ledPina, LOW);
    digitalWrite(pinBuzzer, HIGH); 
      delay(2000);

  } else {
    digitalWrite(ledPinr, LOW); 
    digitalWrite(ledPina, HIGH);
    digitalWrite(pinBuzzer, LOW);
    
  }
  delay(100);
}
