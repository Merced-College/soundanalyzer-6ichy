#include "SoundSensor.h"
#include "SoundAnalyzer.h"

SoundSensor sensor(A0);          // Change pin if needed
SoundAnalyzer analyzer(200, 600); // Example thresholds

void setup() {
    Serial.begin(9600);
    sensor.begin();
}

void loop() {
    int soundLevel = sensor.getSoundLevel();

    std::string result = analyzer.classifySound(soundLevel);

    Serial.print("Sound Level: ");
    Serial.print(soundLevel);
    Serial.print(" -> ");
    Serial.println(result.c_str());

    delay(500);
}
