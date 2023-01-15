/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 1
 * Name: Giselle Avila
 * Created on January 13, 2023, 10:00 PM
 * Purpose: Write a program that stores the integers 50 and 100 in variables, 
 * and stores the sum of these two in a variable named total.                  
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
    int valOne, valTwo, total; //Three variables 
    //Initialize Variables
    valOne = 50;
    valTwo = 100;
    //Map/Process the Inputs -> Outputs
    total = valOne + valTwo; // Adding for the total
    //Display Inputs/Outputs
    cout << "What is the total of 50 plus 100?\n"; // Displayed final answer
    cout << total << endl;
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

