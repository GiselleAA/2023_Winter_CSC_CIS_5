/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 10:00 PM
 * Purpose:  Write a program that takes an employee’s previous annual salary as input, and outputs
 * the amount of retroactive pay due the employee,the new annual salary, and the new monthly salary.
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
    float payInc = 0.076,               //pay increase
          preSal,                       //previous salary
          newSal,                       //new salary
          rePay,                        //Retroactive pay
          neMPay,                       //new monthly salary
          months = 12;                  //year months
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    
    cout << "Input previous annual salary." << endl;
    cin >> preSal;
    
    rePay = ((newSal + preSal)/2) * payInc;         //solving for Retroactive pay
    newSal = preSal + (preSal * payInc);            //solving for new salary
    neMPay = newSal / months;                       //solving for new monthly salary
    
    cout << "Retroactive pay    = $" << setw(7) << fixed << setprecision(2) << rePay << endl;
    cout << "New annual salary  = $" << fixed << setprecision(2) << newSal << endl;
    cout << "New monthly salary = $" << setw(7) << fixed << setprecision(2) << neMPay;
    

    //Exit stage right or left!
    return 0;
}