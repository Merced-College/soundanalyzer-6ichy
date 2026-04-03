#include "SoundAnalyzer.h"

// Constructor — stores the threshold values used for classification
SoundAnalyzer::SoundAnalyzer(int quiet, int medium) {
    quietThreshold  = quiet;
    mediumThreshold = medium;
}

// Classify sound level into one of three categories:
//   below quietThreshold  -> "Quiet"
//   below mediumThreshold -> "Medium"
//   at or above           -> "Loud"
std::string SoundAnalyzer::classifySound(int soundLevel) {
    if (soundLevel < quietThreshold) {
        return "Quiet";
    } else if (soundLevel < mediumThreshold) {
        return "Medium";
    } else {
        return "Loud";
    }
}
