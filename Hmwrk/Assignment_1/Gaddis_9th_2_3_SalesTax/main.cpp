/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 3
 * Name: Giselle Avila
 * Created on January 13, 2023, 10:30 PM
 * Purpose: Write a program chat will compute the total sales tax on a $95 
 * purchase. Assume the state sales tax is 4 percent, and the county sales tax 
 * is 2 percent                  
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
    int purchse = 95;               // total cost of purchase
    float cntytax = 0.02,           // total sales tax in the county    
          stetax  = 0.04,           // total sales tax in the state
            
            purCTtl,              // total cost of purchase in county
            purSTtl;              // total cost of purchase in state
    
    //Initialize Variables
    purCTtl = purchse * cntytax;   //Finding sales tax in the county on item 
    
    
    purSTtl = purchse * stetax;     //Finding sales tax in the state on item 
    
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "The item costs $" << purchse << ", however there is sales tax.\n";
    cout << "According to the county sales tax, the sales tax on the item is $" 
            << purCTtl << "." << endl;
    cout << "According to the state sales tax, the sales tax on the item is $" 
            << purSTtl << "." << endl;
          
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

