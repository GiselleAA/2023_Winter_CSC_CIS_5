/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 18, 2023
 * Purpose:  Write a program that accepts a year written as a four-digit Arabic (ordinary) numeral and outputs the year
 * written in Roman numerals.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare Variables
    int zero3, zero2, zero1, nozero;               //To determine how many 1's,10's,100's,1000's
    unsigned short arab;
    string rom = "";

    //Initialize Variables here
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    
    
    cin >> arab;                                         //input value 
    
    zero3  = arab / 1000;                                //converting process
    zero2  = (arab - zero3 * 1000) / 100;
    zero1  = arab % 100/ 10;
    nozero = arab % 10;

    //Map inputs/knowns to the output




    switch(zero3)
    {                                                     //1000
        case 3: rom += "M";
        case 2: rom += "M";
        case 1: rom += "M";
    }



    switch(zero2)
    {                                                       //100
            case 9:     
            {
                rom += "C";
                rom += "M";
                break;
            }
        
            case 8: case 7: case 6: 
            {
                rom += "D";
                for (int i = 0; i < zero2 - 5; i++) rom += "C";
                break;
            }
            
            case 5: 
            {
                rom += "D";
                break;
            }
        
            case 4: 
            {
                rom += "C";
                rom += "D";
                break;
            }
            
            case 3: case 2: case 1: 
            {
                for (int i = 0; i < zero2; i++) rom += "C";
             break;
            }

    }




     switch(zero1)                                              //10
     {
            case 9: 
            {
                rom += "X";
                rom += "C";
                break;
            }
            case 8: case 7: case 6: 
            {
                rom += "L";
                for (int i = 0; i < zero1 - 5; i++) rom += "X";
                break;
            }
            case 5: 
            {
                rom += "L";
                break;
            }
            case 4:
            {
                rom += "X";
                rom += "L";
                break;
            }
            case 3: case 2: case 1: 
            {
                
                for (int i = 0; i < zero1; i++) rom += "X";
                break;
            }
    }




    switch(nozero)                                          //1
    {
            case 9: 
            {
                rom += "I";
                rom += "X";
                break;
            }
            
            case 8: case 7: case 6: 
            {
                rom += "V";
                for (int i = 0; i < nozero - 5; i++) rom += "I";
                break;
            }
            
            case 5: 
            {
                rom += "V";
                break;
            }
            
            case 4: 
            {
                rom += "I";
                rom += "V";
                break;
            }
            
            case 3: case 2: case 1: 
            {
                for (int i = 0; i < zero1; i++) rom += "I";
                break;
            }
    }
    
    
             if (arab < 1000 || arab > 3000)
                    cout << arab << " is Out of Range!";
                else
                    cout << arab << " is equal to " << rom;
            
    
        return 0 ;
} 