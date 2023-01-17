/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 7:36 PM
 * Purpose:  Write a program that converts Fahrenheit temperatures to Celsius temperatures. 
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
    float fahTmp,                                   //Fahrenheit temperatures 
          celsTmp;                                  //Celsius temperatures
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin  >> fahTmp;                             
    
        celsTmp = (5.0 / 9.0) * (fahTmp - 32);      //Converting Fahrenheit to Celsius

    cout << fixed << setprecision(1);
    cout << fahTmp << " Degrees Fahrenheit = " << celsTmp << " Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}