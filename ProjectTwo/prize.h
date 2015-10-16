/*
 * Header file for project 2's Prize Class
 *
 * Chad Durkin
 *
 * 10/13
 * 10/13
 *
 */

#pragma once

#include <string>
using namespace std;

class Prize {

    public:

    //default constructor
    Prize();
    
    //overloaded constructor
    Prize(string newPrizeName, unsigned int newPrizeValue);
    
    //destructor
    ~Prize();

    void setPrizeName(string newPrizeName);

    void setPrizeValue(unsigned int newPrizeValue);

    unsigned int getPrizeValue();

    string getPrizeName();
    
    friend bool operator== (const Prize& lp, const Prize& rp); 

    private:

    string prizeName;
    unsigned int prizeValue;

};
