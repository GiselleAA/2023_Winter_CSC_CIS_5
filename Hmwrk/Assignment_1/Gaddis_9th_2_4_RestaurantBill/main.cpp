/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 4
 * Created on January 13, 2023, 10:40 PM
 * Purpose: Wricc a program that computes the tax and tip on a restaurant bill 
 * for a patron with a $88.67 meal charge. The tax should be 6.75 percent of 
 * the meal cost. The rip should be 20 percent of the toral after adding the tax. 
 * Display che meal cost, tax amount, tip amount, and coral bill on the screen. 
 */
//System Libraries
#include <iostream> //Input Output Library
#include <iomanip>  //iomanip Library
using namespace std;

//User Libraries

//Global Constants and not Variables 
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    
    float mealTol = 88.67,          //meal total
            tax   = 0.0675,         //tax percent
            tip   = 0.2,            //tip percent
            taxAm,                  //tax total
            tipAm,                  //tip total 
            bilTal;                 //overall bill total
    
    //Initialize Variables
    taxAm = tax * mealTol;              //tax applied to meal cost
    tipAm = (taxAm + mealTol) * tip;    //tip applied after tax and meal applied
    bilTal = taxAm + tipAm + mealTol;   //adding for overall bill
      
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "The meal costed: $" << mealTol << endl;
    cout << "The tax amount is: $" << fixed << showpoint << setprecision(2) << taxAm << endl;
    cout << "The tip amount is: $" << fixed << showpoint << setprecision(2)<< tipAm << endl;
    cout << "The overall bill is: $" << fixed << showpoint << setprecision(2) << bilTal << endl;
           
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

