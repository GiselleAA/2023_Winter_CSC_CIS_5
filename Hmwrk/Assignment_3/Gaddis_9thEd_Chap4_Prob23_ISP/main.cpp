/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 18, 2023
 * Purpose:  Write a program that calculates a customer’s monthly bill. It should ask which package
 * the customer has purchased and how many hours were used. It should then display the total amount due.
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
int main(int argc, char** argv) 
{
    
    //Set the random number seed
    
    //Declare Variables
    float billR,                                                                          //amount total, amount of hours
          hrs;                       
    char  plan;                                                                            //plan for three different subscription packages for its customers

    //Initialize or input i.e. set variable values
    
    cout << "ISP Bill" << endl << "Input Package and Hours" << endl;
    
    cin >> plan >> hrs;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    //Display the outputs

    
    if (!(hrs < 744))                                                                      //Also, the number of hours used in a month cannot exceed 744.
    {   
        cout << "Invalid input. Please try again.";
    }
    
    if (!(plan == 65 || plan == 66 || plan == 67))
    {
        cout << "I'm sorry, but that isn't plan A, B, or C. Please try again.";           //If not enter A B or C
    }
    
    //the 3 packages below    
        
        if (plan == 65)                                                                   //Plan A
        {
                if (hrs > 10) 
                {
                    billR = 9.95 + ((hrs - 10) * 2.00f);
                    cout << "Bill = $" << setw(6) << billR;
                }
                else 
                {
                    billR = 9.95;
                    cout << "Bill = $" << setw(6) << billR;
                }
        }
    
    
    
    if (plan == 66)                                                                         //Plan B
    {
            if (hrs > 20)
            {
                billR = 14.95 + ((hrs-20) * 1.00f);
                cout << "Bill = $" << setw(6) << billR;
            }
            else 
            {
                billR = 14.95;
                cout << "Bill = $" << setw(6) << billR;
            }
    }
    
    
    
    if (plan == 67)                                                                         //Plan C
    {
            billR = 19.95f;
            cout << "Bill = $" << setw(6) << billR;
    }
    

    //Exit stage right or left!
    return 0;
}