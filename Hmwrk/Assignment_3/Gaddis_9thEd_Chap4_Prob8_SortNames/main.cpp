/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 18, 2023, 6:37 PM
 * Purpose:  Write a program that asks the user to enter three names, and then displays the names
 * sorted in alphabetical order. Assume that none of the names are the same.
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
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;                                 //variables for 3 names
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
     cout << "Sorting Names\n" << "Input 3 names\n";
     cin  >> name1 >> name2 >> name3;                           //Input value names
     
     if(name1 < name2 && name2 < name3)                         //if statement sorting out names value/alphabet order
            {
                cout << name1 << endl << name2 << endl << name3;
            }
             
     if(name2 < name1 && name1 < name3)
            {
                 cout << name2 << endl << name1 << endl << name3;
            }
                      
     if(name3 < name1 && name1 < name2)
            {
                cout << name3 << endl << name1 << endl << name2;
            }
     
     if(name2 < name3 && name3 < name1)
            {
                cout << name2 << endl << name3 << endl << name1;
            }
            
     if(name3 < name2 && name2 < name1)
            {
                cout << name3 << endl << name2 << endl << name1;
            }
     
     
    //Exit stage right or left!
    return 0;
}