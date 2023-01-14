/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 7
 * Created on January 13, 2023
 * Purpose: Wricc a program that computes the tax and tip on a restaurant bill 
 * for a patron with a $88.67 meal charge. The tax should be 6.75 percent of 
 * the meal cost. The rip should be 20 percent of the toral after adding the tax. 
 * Display che meal cost, tax amount, tip amount, and coral bill on the screen. 
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
    float oceYrly = 1.5,
          fivYrs  = 5,
          sevYrs = 7,
          tenYrs = 10,
          afFiv,
          afSev,
          afTen;
          
          
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
       afFiv = oceYrly * fivYrs;
       afSev = oceYrly * sevYrs;
       afTen = oceYrly * tenYrs;
    //Display Inputs/Outputs
       cout << "The ocean's level will grow " << afFiv <<
                " millimeters after five years.\n";
       cout  << "The ocean's level will grow " << afSev <<
                " millimeters after seven years.\n";
       cout << "The ocean's level will grow " << afTen <<
                " millimeters after ten years.\n";


    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

