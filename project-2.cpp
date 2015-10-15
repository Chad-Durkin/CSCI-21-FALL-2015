/*
 * Project 2
 *
 * 
 *
 * Chad Durkin
 
 * 10/13
 * 10/13
 */
 
#include <iostream>
#include <string>
//#include "prize.h"
//#include "box.h"
using namespace std;


class Prize {

    public:

    //default constructor
    Prize();
    //{
    //    string itemName = "NO NAME";
    //    unsigned int itemValue = 0;
    //};
    
    //overloaded constructor
    Prize(string itemName, unsigned int itemValue);//, string prizeName, unsigned int prizeValue);
    
    //destructor
    ~Prize();
    
    //friend overloaded constructor
    
    //itemName accessor
    //@return the itemName
    string getItemName();
    
    //itemName mutator
    //@param nameOfItem the name to be set to the item
    string setItemName(string nameOfItem);
    
    //itemValue accessor
    //@return itemValue, the value of the item
    unsigned int getItemValue();
    
    //itemValue mutator
    //@param valueOfItem the value to be set to the item
    unsigned int setItemValue(unsigned int valueOfItem);
    
    //prizeName accessor
    //@return returns the name of the prize
    string getPrizeName();
    
    //prizeName mutator
    //@param nameOfPrize the name to be set to the prize
    string setPrizeName(string nameOfPrize);
    
    //prizeValue accessor
    //@return returns the value of the prize
    unsigned int getPrizeValue();
    
    //prizeValue mutator
    //@param valueOfPrize the prize value that you will be setting prizeValue to
    unsigned int setPrizeValue(unsigned int valueOfPrize);

    private:

    string itemName;
    unsigned int itemValue;
    string prizeName;
    unsigned int prizeValue;

};

class Box {
    
    public:
    
    //default constructor for Box
    Box();
    //{
    //    boxNumber = 0;
    //    boxColor = "NO COLOR";
    //    prizeCapacity = 5;
    //    prizeCount = 0;
        //prizes = prizeCapacity; //initialize prizes to match prizeCapacity
    //};
    
    //overloaded constructor for Box
    Box(unsigned int theBoxNumber, string theBoxColor, unsigned int thePrizeCapacity);
    //{
        //prizes = prizeCapacity //initialize prizes to match prizeCapacity
    //};
    
    ~Box();
    
    //boxNumber accessor
    //@return the private variable boxNumber
    unsigned int getBoxNumber();
    
    //boxNumber mutator
    //@param numberOfBox the number your setting the private variable boxNumber to
    unsigned int setBoxNumber(unsigned int numberOfBox);
    
    //boxColor accessor
    //@return the private variable boxColor
    string getBoxColor();
    
    //boxColor mutator
    //@param colorOfBox the color your setting the private variable boxColor to
    string setBoxColor(string colorOfBox);
    
    //prizeCapacity accessor
    //@return the capacity of the prize
    unsigned int getPrizeCapacity();
    
    //prizeCount accessor
    //@return the prize count
    unsigned int getPrizeCount();
    
    //place Prize in the prizes array if there is space, and return true, else return false
    //@param Prize the prize your going to add to array, if space is available
    //@return true, if there is space and the prize was placed in the array
    //@return false if there is no space in the array for the prize
    bool addPrize(Prize);
    
    //return a Prize if index is valid, else return scratch
    //@param index the location of the prize
    //@return Prize& return the prize if index is valid
    Prize& getPrize(unsigned int index);
    
    //remove and return Prize if if index is valid, else return scratch
    //@param index the location of the prize to be removed
    //@return Prize return the prize that was removed
    Prize removePrize(unsigned int index);
    
    private:
    
    unsigned int boxNumber;
    string boxColor;
    Prize scratch;
    Prize* prizes;
    unsigned int prizeCapacity;
    unsigned int prizeCount;

};

//Throw exception
struct ArrayException {
    ArrayException (string newMessage="error")
    : message(newMessage) {
    }

    string message;
};


int main() {

    Prize();
    
    Box();

    //Menu containing all member functions in Prize and Box

}



/*****************************PRIZE FUNCTIONS*****************************/

Prize::Prize() {

    itemName = "NO NAME";
    itemValue = 0;

}

Prize::Prize(string itemName, unsigned int itemValue) {//, string prizeName, unsigned int prizeValue) {
    
    prizeName = itemName;
    prizeValue = itemValue;
    
}

Prize::~Prize() {

}

string Prize::getItemName() {
    
    return itemName;
    
}

string Prize::setItemName(string nameOfItem) {

    itemName = nameOfItem;

}

unsigned int Prize::getItemValue() {
    
    return itemValue;

}

unsigned int Prize::setItemValue(unsigned int valueOfItem) {
    
    itemValue = valueOfItem;

}

string Prize::getPrizeName() {
    
    return prizeName;

}

string Prize::setPrizeName(string nameOfPrize) {
    
    prizeName = nameOfPrize;

}

unsigned int Prize::getPrizeValue() {
    
    return prizeValue;

}

unsigned int Prize::setPrizeValue(unsigned int valueOfPrize) {
    
    prizeValue = valueOfPrize;

}




/*****************************BOX FUNCTIONS*****************************/

Box::Box(){

    boxNumber = 0;
    boxColor = "NO COLOR";
    prizeCapacity = 5;
    prizeCount = 0;
    prizes[prizeCapacity];

}

Box::Box(unsigned int theBoxNumber, string theBoxColor, unsigned int thePrizeCapacity) {
    
    boxNumber = theBoxNumber;
    boxColor = theBoxColor;
    prizes[thePrizeCapacity];
    
}

Box::~Box() {
    
    
}

unsigned int Box::getBoxNumber() {
    
    return boxNumber;

}

unsigned int Box::setBoxNumber(unsigned int numberOfBox) {
    
    boxNumber = numberOfBox;

}

string Box::getBoxColor() {
    
    return boxColor;

}

string Box::setBoxColor(string colorOfBox) {
    
    boxColor = colorOfBox;

}

unsigned int Box::getPrizeCapacity() {
    
    return prizeCapacity;

}

unsigned int Box::getPrizeCount() {
    
    return prizeCount;

}

bool Box::addPrize(Prize) {
    
    if(prizeCount >= prizeCapacity)
    {
        return false;
    }
    
    prizes[prizeCount] = Prize();
    
    return true;

}

Prize& Box::getPrize(unsigned int index) {
    
    if(index >= prizeCount)
    {
        throw ArrayException("INVALID INDEX");
    }
    
    return prizes[index];
    
    
    
}

Prize Box::removePrize(unsigned int index) {
    
    if(index >= prizeCount)
    {
        return scratch;
    }
    
    Prize prizeRemoved = prizes[index];
    
    for(int i = 0; i < prizeCount; i++)
    {
        prizes[index] = prizes[index + 1];
    }
    
    prizeCount--;
    
    return prizeRemoved;
    
}