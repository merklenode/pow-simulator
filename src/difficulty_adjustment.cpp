#include "difficulty_adjustment.h"

int adjustDifficulty(int timeTaken, int targetTime) {
    // Increase difficulty if mining took less time than expected
    if (timeTaken < targetTime) {
        return targetTime + 1;
    }
    // Decrease difficulty if mining took more time
    else if (timeTaken > targetTime) {
        return targetTime - 1;
    }
    return targetTime;
}
