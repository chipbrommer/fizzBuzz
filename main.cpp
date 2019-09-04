//
//  main.cpp
//  FizzBuzz
//
//  Created by Chip Brommer on 9/3/19.
//  Copyright © 2019 Chip Brommer. All rights reserved.
//
//  Approach to the common "FizzBuzz" programming problem using two different solution options.
//          1: Switch Case
//          2: If Else Statements
//

#include <iostream>
#include <algorithm>

using namespace std;

int multipleCheck(int, int);
void fizzBuzzSwitch();
void fizzBuzzIfElse();

int main(int argc, const char * argv[])
{
    
    //Calling the switch case method
    fizzBuzzSwitch();
    
    //Spacer between the functions.
    cout << endl << endl;
    
    //Calling the if else method
    fizzBuzzIfElse();
    
}

//Checks if 'i' is a multiple of 'value'.
int multipleCheck(int i, int value)
{
    return i % value == 0;
}

//Fizz Buzz solution using a switch case method.
void fizzBuzzSwitch()
{
    int multNumMax = 15;
    
    cout << "FizzBuzz solution using a 'Switch Case' approach.\n\t";
    
    //For integer size 1 to 100; terminates loop when int reaches 101
    for( int i = 1; i < 101; i++)
    {
        switch(i % multNumMax)
        {
            //If case value from switch returns 0, multiple of 15
            case 0:
            {
                cout << "FizzBuzz";
                break;              //Break out of switch
            }
            //Multiple of 5
            case 5:
            case 10:
            {
                cout << "Buzz";
                break;              //Break out of switch
            }
            //Multiple of 3
            case 3:
            case 6:
            case 9:
            case 12:
            {
                cout << "Fizz";
                break;               //Break out of switch
            }
            //Not a multiple of 3,5, or 15
            default:
            {
                cout << i;
            }
        }
        
         //If Else for punctuation
        
        if( i == 100)       //If I == 100, use a period.
        {
            cout << ".";
        }
        else                //i != 100, so use a comma.
        {
            cout << ", ";
        }
        
        //Check if 10 items have been printed, if yes, end line.
        if(multipleCheck(i, 10))
        {
            cout << "\n\t";
        }
    }
}

//Fizz Buzz solution using a if else method.
void fizzBuzzIfElse()
{
    //Setting the starting point
    int i = 0;
    
    cout << "FizzBuzz solution using an 'If Else' approach.\n\t";
    
    //For integer size 1 to 100; terminates loop when int reaches 101
    for(i = 1; i < 101; i++)
    {
        if(multipleCheck(i, 15))        //Checking if i is a value of 15
        {
            cout << "FizzBuzz";
        }
        else if(multipleCheck(i, 5))    //Checking if i is a value of 5
        {
            cout << "Buzz";
        }
        else if(multipleCheck(i, 3))       //Checking if i is a value of 3
        {
            cout << "Fizz";
        }
        else                            //Not a value of 3,5, or 15: Prints value.
        {
            cout << i;
        }
        
        //If Else for punctuation
        
        if( i == 100)    //Checking if i == 100 to use a period instead of comma
        {
            cout << ".";
        }
        else            //I != 100, use a comma.
        {
            cout << ", ";
        }
        
        //Check if 10 items have been printed, if yes, end line.
        if(multipleCheck(i, 10))
        {
            cout << "\n\t";
        }
    }
}
