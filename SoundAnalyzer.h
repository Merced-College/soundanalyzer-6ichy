#ifndef SOUNDANALYZER_H
#define SOUNDANALYZER_H

#include <string>

class SoundAnalyzer {
private:
    int quietThreshold;
    int mediumThreshold;

public:
    // Constructor with thresholds
    SoundAnalyzer(int quiet, int medium);

    // Analyze sound level and return category
    std::string classifySound(int soundLevel);
};

#endif
