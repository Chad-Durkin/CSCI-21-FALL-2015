/*
 * Header file for Project 2's Box Class
 *
 * Chad Durkin
 *
 * 10/13
 * 10/13
 *
 */

#ifndef BOX_H
#define BOX_H

template<class T>

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