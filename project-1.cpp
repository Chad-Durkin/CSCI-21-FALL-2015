/*
* Programming Project 1
* Use the code I've learned to show that I can
* Go through strings/arrays and iterate through them, by words and individual characters
* While keeping track of a certain type(value,capitalization,words)
* As well as being able to apply math to the value's and strings/array
*
* Chad Durkin
* 9/15/15
* 9/15/15
*
* I used www.cplusplus.com for help with word counting function
* and certain syntax errors I had with using strings/string operators.
*/

#include <iostream>
#include <string>
using namespace std;

/*
* My countCharacters function goes through a string as if its an array and counts the number
* of letters and numbers that are in it, setting a seperate value to hold the amount of each,
* and adding to it as more are found.
* @param theString is the string the function goes through and calcs how many #'s and alphas are in it
* @param alpha is my place holder for how many alphabetic characters are found in the string
* @param num is my place holder for how many numerical characters are found in the string
*/
void countCharacters(string theString, int& alpha, int& num);

/*
* My upAndDown function iterates through the string, using a while loop, and Uppercasing the
* first character and Lowercasing the second character, in that order, and starts back at the
* third character, then the fourth, doing two at a time until end of string.
* @param theString is the string I use to go through and switch all the capitalizations of its char's
* @return I return the new string with its characters Uppercased and Lowercased
*/
string upAndDown(string theString);

/*
* My countWords function I had to use cplusplus to get the syntax correct, I had the idea of how
* to do it, but needed a reference to make sure I had done it correctly. I can tell you what it
* does in terms of a function and in syntax terms if need be. It goes through a string and counts how
* many words are in it, assuming theres no spaces at the front/end of string, it uses the spaces to count
* when theres a new word, assuming also theres no spaces back to back.
* @param theString is the string that is sent in and iterated through to have its words counted
* @return countWords returns the number of words "word_count" that are in the string
*/
int countWords(string theString);

/*
* My countAverage function sets an int named avg, for average, to 0, and then goes through an Array,
* adding each value to the int avg, until all values are added to it, then sets the int avg to the 
* value of avg devided by the arraySize-1 (because of extra location)
* @param values is the array of values sent in to have the average found
* @param arraySize is the size of the array, used to iterate through efficently and also for math used to find average
* @return avg avg is the average of the array, the total of the values added up, devided by the arraySize-1
*/
int computeAverage(int values [], int arraySize);

/*
* My findMinValue function goes through an array of values and sets an int, minValue, to the first value,
* and then goes through the array and compares each value to see if its less than minValue, and if it is, it
* changes the minValue to the new lowest value, until all values are gone through.
* @param values is the array of values sent in to have its lowest value found
* @param arraySize is the size of the array, used to iterate through and find the min value efficently
* @return minValue the lowest value found in the array
*/
int findMinValue(int values [], int arraySize);

/*
* My findMaxValue function goes through an array of values and sets an int, maxValue, to the first value,
* and then goes through the array and compares each value to see if its greater than the maxValue, and if it is,
* it changes the maxValue to that value, until all values have been checked.
* @param values is the array of values sent in to have its greatest value found
* @param arraySize is the size of the array, used to iterate through and find the max value efficently
* @return maxValue the greatest value found in the array
*/
int findMaxValue(int values [], int arraySize);

/*
* This is the programs main function
*/

int main(int argc, char* argv[])
{

    
    
    return 0;
}


void countCharacters(string theString, int& alpha, int& num)
    {
        for(int i=0; i < theString.length(); i++)
        {
            if(isdigit(theString[i]))
            {
                num++;
            }
            else-if(isalpha(theString[i]))
            {
                alpha++;
            }
        }
    }

string upAndDown(string theString)
    {
        int i=0;
        
        while(i < theString.length())
        {
            toupper(theString[i]);
            
            i++;
            
            tolower(theString[i]);
            
            i++;
    
        }
        
        return theString;
    }

int countWords(string theString)
    {
        int word_count = 0;
        
        for(int i=0; i < theString.length(); i++)
        {
            if(isspace(theString[i]))
            word_count++;
        }
        
        return word_count;
    }

int computeAverage(int values [], int arraySize)
    {
        int avg = 0;
        
        for(int i=0; i < arraySize; i++)
        {
            avg = avg + values[i];
        }
        
        avg = avg / (arraySize - 1);
        
        return avg;
    }

int findMinValue(int values [], int arraySize)
    {
        int minValue = values[0];
        
        for(int i=0; i < arraySize.size(); i++)
        {
            if(values[i] < minValue)
                minValue = values[i];
        }
        
        return minValue;
    }

int findMaxValue(int values [], int arraySize)
    {
        int maxValue = values[0];
        
        for(int i=0; i < arraySize.size(); i++)
        {
                if(values[i] > maxValue)
                    maxValue = values[i];
        }
        
        return maxValue;
    }