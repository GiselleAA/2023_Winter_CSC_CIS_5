/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 11:00 PM
 * Purpose:  Write a program that reads in ten whole numbers and that outputs the
 * sum of all the numbers greater than zero, the sum of all the numbers less
 * than zero (which will be a negative number or zero), and the sum of all
 * the numbers, whether positive, negative, or zero. 
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
    int value, posSum, negSum;                  //value = inputed integer, posSum = positive num, negSum = negative num
    //Initialize or input i.e. set variable values
    posSum = negSum = 0;
    //Map inputs -> outputs
    
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    cin >> value;
    posSum += value > 0 ? value:0;
    negSum += value < 0 ? value:0;
    
    //Display the outputs
    cout << "Negative sum = " << setw(3) << negSum << endl;
    cout << "Positive sum = " << setw(3) << posSum << endl;
    cout << "Total sum    = " << setw(3) << posSum + negSum;
    
    //Exit stage right or left!
    return 0;
}