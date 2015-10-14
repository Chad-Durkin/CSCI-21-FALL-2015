/*
 * Header file for project 2's Prize Class
 *
 * Chad Durkin
 *
 * 10/13
 * 10/13
 *
 */
 
#ifndef PRIZE_H
#define PRIZE-H

template<class T>

class Prize {

    public:

    //default constructor
    Prize()
    {
        string itemName = "NO NAME";
        unsigned int itemValue = 0;
    };
    
    //overloaded constructor
    Prize(string itemName, unsigned int itemValue, string prizeName, unsigned int prizeValue);
    
    //destructor
    ~Empty();
    
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

    string prizeName;
    unsigned int prizeValue;

};

#endif