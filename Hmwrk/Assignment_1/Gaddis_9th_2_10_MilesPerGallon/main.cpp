/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 10
 * Name: Giselle Avila
 * Created on January 13, 2023, 11:50 PM
 * Purpose: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
 * program that calculates the number of miles per gallon the car gets. Display the result
 * on the screen.
 */

//System Libraries
#include <iostream> //Input Output Library
using namespace std;

//User Libraries

//Global Constants and not Variables 
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables 
    int galns = 15,             //car holds 15 gallons of gas
        tlMiles = 375,          //can travel 375 mi before refueling
        MPG;                    //miles per gallon
    
    //Initialize Variables
    MPG = tlMiles / galns;      //solving for miles per gallon
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs  
    cout << "A car holds 15 gallons of gasoline and can travel 375 miles before refueling."
         << " Therefore, the number of miles per gallon the car get will be: " 
         <<  MPG << " miles per gallon.";
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

