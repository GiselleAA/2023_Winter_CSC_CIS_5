/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 8:56 PM
 * Purpose:  Calculate the gross pay.
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
    float monHr,                    //pay per hour
          numHr,                    //number of hrs worked
          pChek;                    //pay overall
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin  >> monHr >> numHr;
    
    if (numHr > 40)                     //if worked overtime, paytime will be doubled for that overtime amount
        
        pChek = (monHr * 40) + ((numHr - 40) * (monHr*2));
                    
             else 
                 pChek = monHr * numHr;
    
    cout << "Paycheck = $" << setw(7) << fixed << setprecision(2) << pChek;
    //Exit stage right or left!
    return 0;
}