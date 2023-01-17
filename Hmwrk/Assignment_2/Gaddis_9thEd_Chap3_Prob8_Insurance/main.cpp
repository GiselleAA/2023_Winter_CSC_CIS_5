/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 7:03 PM
 * Purpose:  Write a program that asks the user to enter the replacement cost of a building and then displays 
 * the minimum amount of insurance he or she should buy for the property. 
 * 
 */


//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float insrPr = 0.8,                                 //Insurance percentage
          replaCst,                                     //Replacement cost
          minTol;                                       //Min amount of Insurance should buy for property
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin  >> replaCst;
        minTol = replaCst * insrPr;                     //solving for min amount of insurance buy for property
    cout << "You need $" << minTol << " of insurance.";
    //Exit stage right or left!
    return 0;
}