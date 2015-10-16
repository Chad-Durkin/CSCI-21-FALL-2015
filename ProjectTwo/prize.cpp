#include "prize.h"


Prize::Prize()
 : prizeName("NO NAME"), prizeValue(0){}

Prize::Prize(string newPrizeName, unsigned int newPrizeValue)
 : prizeName(newPrizeName), prizeValue(newPrizeValue) {}

Prize::~Prize() {}

void Prize::setPrizeName(string newPrizeName) {
    prizeName = newPrizeName;
}

void Prize::setPrizeValue(unsigned int newPrizeValue) {
    prizeValue = newPrizeValue;
}

unsigned int Prize::getPrizeValue() {
    return prizeValue;
}

string Prize::getPrizeName() {
    return prizeName;
}

bool operator== (const Prize& lp, const Prize& rp) {
    return (lp.prizeName == rp.prizeName &&
            lp.prizeValue == rp.prizeValue);
}