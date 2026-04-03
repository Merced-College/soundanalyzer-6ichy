#include "SoundSensor.h"
#include <Arduino.h>

// Constructor — stores the analog pin number
SoundSensor::SoundSensor(int sensorPin) {
    pin = sensorPin;
}

// Initialize sensor — configure pin as input
void SoundSensor::begin() {
    pinMode(pin, INPUT);
}

// Read sound level — returns raw analog value (0–1023)
int SoundSensor::getSoundLevel() {
    return analogRead(pin);
}
