/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 8
 * Name: Giselle Avila
 * Created on January 13, 2023, 11:25 PM
 * Purpose: Write a program that holds the prices of the five items in five 
 * variables. Display each item's price, the subtotal of the sale, the amount 
 * of sales tax, and the total. Assume the sales tax is 7 percent. 
 */
//System Libraries
#include <iostream> //Input Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants and not Variables 
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float slstax = 0.07,            //Sales Tax percentage
            
          prcIt1 = 15.95,           //Item 1 price
          prcIt2 = 24.95,           //Item 2 price
          prcIt3 = 6.95,            //Item 3 price
          prcIt4 = 12.95,           //Item 4 price
          prcIt5 = 3.95,            //Item 5 price
          
            
          sumItm = prcIt1 + prcIt2 + prcIt3 + prcIt4 + prcIt5,  //Total of all items 
            
          itmTax1 = prcIt1 * slstax,                //Item 1 sales tax
          itmTax2 = prcIt2 * slstax,                //Item 2 sales tax
          itmTax3 = prcIt3 * slstax,                //Item 3 sales tax
          itmTax4 = prcIt4 * slstax,                //Item 4 sales tax
          itmTax5 = prcIt5 * slstax,                //Item 5 sales tax
            
          sumTax  = itmTax1 + itmTax2 + itmTax3 + itmTax4 + itmTax5,       //Total of all sales tax
            
          ovrtal  = sumTax + sumItm;        //Overall total of purchase
                  
            
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    //Displaying prices of items
    cout << "FIVE items prices: " << endl << "1. $" << prcIt1 << endl << "2. $" 
            << prcIt2 << endl << "3. $" << prcIt3 << endl << "4. $" << prcIt4 << endl 
            << "5. $" << prcIt5 << endl << endl;
    
    //Displaying prices added
    cout << "Subtotal of items: " << endl << "$" << fixed << showpoint << 
            setprecision(2) << sumItm << endl << endl;
    
    //Displaying sales tax total
    cout << "Total of sales tax: " << endl << "$" << fixed << showpoint << 
            setprecision(2) << sumTax << endl << endl;
    
    //Displaying 
    cout <<  "Total of overall purchase: " << endl << "$" << fixed << showpoint << 
            setprecision(2) << ovrtal << endl << endl;
    
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

