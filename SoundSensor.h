#ifndef SOUNDSENSOR_H
#define SOUNDSENSOR_H

class SoundSensor {
private:
    int pin;          // Analog pin for sound input

public:
    // Constructor
    SoundSensor(int sensorPin);

    // Initialize sensor (if needed)
    void begin();

    // Read current sound level
    int getSoundLevel();
};

#endif
