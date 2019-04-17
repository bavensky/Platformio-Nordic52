// https://os.mbed.com/platforms/Nordic-nRF52-DK/

#include <Arduino.h>
#include <SoftwareSerial.h>

#define RXD 10
#define RXD 11

SoftwareSerial softSerial(RXD, RXD);

#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4
#define BUTTON_4 5

#define LED_1 6
#define LED_2 7
#define LED_3 8
#define LED_4 9

void setup()
{
  Serial.begin(9600);
  softSerial.begin(9600);

  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  pinMode(BUTTON_4, INPUT_PULLUP);

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, HIGH);
}

void loop()
{
  if (digitalRead(BUTTON_1) == LOW)
  {
    digitalWrite(LED_1, LOW);
  }
  else
  {
    digitalWrite(LED_1, HIGH);
  }
}