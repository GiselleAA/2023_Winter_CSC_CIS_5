/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 6:31 PM
 * Purpose:  Write a program that asks for five test scores. The program should calculate the average
 * test score and display it. The number displayed should be formatted in fixed-point 
 * notation, with one decimal point of precision.
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
        float tests = 5,                               //amount of tests
              scor1, scor2, scor3, scor4, scor5,       //variables representing each test
              avg;                                     //average of tests
              
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << setprecision(1) << fixed;                       //fixed-point notation, with one decimal point of precision
    cout << "Input 5 numbers to average." << endl;
    cin >> scor1 >> scor2 >> scor3 >> scor4 >> scor5;       //sending inputs to variables
    
    avg = (scor1 + scor2 + scor3 + scor4 + scor5) / tests;  //calculating average
    
    //Display the outputs
    
    cout << "The average = " << avg;
    //Exit stage right or left!
    return 0;
}