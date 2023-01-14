/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 6
 * Created on January 13, 2023, 111:00 PM PM
 * Purpose: Suppose an employee gees paid every two weeks and earns $2,200 
 * each pay period. In a year, the employee gees paid 26 times. 
 * Display the total annual pay on the screen. 
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
    float payAmount = 2200.0,     //amount of pay the employee earns each pay period.  
          payPeriods = 26,         //amount of times they got paid in the year
          annualPay;               //amount made in the year overall
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    annualPay = payAmount * payPeriods;     //solving for annual salary
    //Clean up memory and files
    cout << "The employee's total annual pay is $" << annualPay << "." << endl;
    //Exit the Program
    return 0;
}

