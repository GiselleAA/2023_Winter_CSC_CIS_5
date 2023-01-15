/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 2
 * Name: Giselle Avila
 * Created on January 13, 2023, 10:15 PM
 * Purpose: The East Coast sales division of a company generates 58 percent of 
 * total sales. Based on that percentage, write a program that will predict how 
 * much the East Coast division will generate if the company has $8.6 million in 
 * sales this year                  
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
    float prcntsl, salsYr, totlSls; 
    
    //Initialize Variables
    prcntsl = 0.58;                          //East Coast percent of total sales
    salsYr = 8.6E6;                          //Total sales this year
    
    //Map/Process the Inputs -> Outputs
    totlSls = salsYr * prcntsl;               //East Coast total  sales this year
    
    //Display Inputs/Outputs
    cout << "How much will the East Coast Sales division make this year?\n";
    cout << "The East Coast Sales division will make: $" << totlSls << " this year!";
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}