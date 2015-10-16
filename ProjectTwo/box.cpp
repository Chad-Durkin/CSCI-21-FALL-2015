#include "box.h"


Box::Box()
 : boxNumber(0), boxColor("NO COLOR"), prizeCapacity(5), prizeCount(0) {
     prizes = new Prize[prizeCapacity];
 }

Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity)
 : boxNumber(newBoxNumber), boxColor(newBoxColor), prizeCapacity(newPrizeCapacity), prizeCount(0) {
     prizes = new Prize[newPrizeCapacity];
 }

Box::~Box() {}

unsigned int Box::getBoxNumber() {
    return boxNumber;
}

void Box::setBoxNumber(unsigned int newBoxNumber) {
    boxNumber = newBoxNumber;
}

string Box::getBoxColor() {
    return boxColor;
}

void Box::setBoxColor(string newBoxColor) {
    boxColor = newBoxColor;
}

unsigned int Box::getPrizeCapacity() {
    return prizeCapacity;
}

unsigned int Box::getPrizeCount() {
    return prizeCount;
}

bool Box::addPrize(Prize newPrize) {
    
    if(prizeCount == prizeCapacity)
    {
        return false;
    }
    
    prizes[prizeCount] = newPrize;
    
    prizeCount++;
    
    return true;

}

Prize& Box::getPrize(unsigned int index) {
    
    if(index >= prizeCount)
        return scratch;
    
    return prizes[index];
}

Prize Box::removePrize(unsigned int index) {
    
    if(index >= prizeCount)
    {
        return scratch;
    }
    
    Prize prizeRemoved = prizes[index];
    
    for(unsigned int i = 0; (index + i) < prizeCount; i++)
    {
        prizes[index] = prizes[index + i];
    }
    
    prizeCount--;
    
    return prizeRemoved;
    
}