/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 18, 2023
 * Purpose: Write a program that asks for the beginning balance
 * and the number of checks written. Compute and display the bank’s service fees for the month.
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
    
    //Declare Variables
    float   monthly = 10,           //monthly charge
            Cfees,                  //check fees
            balance,                //account Balance 
            lowB = 0,               //account low
            totFee;                 //total fees for the month
            
    int     checks;                 //amount of checks written
    
    //Initialize Variables
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks"<< endl;
    cin >> balance >> checks;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if Customers Account Balance is overdrawn, if so
    //Display an Urgent message
    if (checks < 0)
    {
        return 0;
    }
    
        if (balance <= 0)
            {
            
            cout<<"Sorry, your bank account is OVERDRAWN." << endl;
            
            }
        
            else
                {
                       cout << "Balance" << setw(6) << "$" << setw(9) << fixed << setprecision(2) << balance << endl;
                }


    //Display Inputs/Outputs
    
    if (checks > 0 && checks <= 19)
    {
        
        Cfees = (checks * 0.10);
    }

           else if (checks >= 20 && checks <= 39)
            {
                Cfees = (checks * 0.08);
            }
    
                else if (checks >= 40 && checks <= 59)
                {
                    Cfees = (checks * 0.06);
                }
    
                        else 
                        {
                            Cfees = (checks * 0.04);
                        }


    cout << "Check Fee   $" << setw(9) << fixed << setprecision(2) << Cfees << endl;
    cout << "Monthly Fee $" << setw(9) << fixed << setprecision(2) << monthly << endl;
    

    if (balance < 400)
    {
        lowB = 15.00;
        cout << "Low Balance $" << setw(9) << fixed << setprecision(2) << lowB << endl;
    }
            else 
            {
                lowB = 0;
                cout << "Low Balance $" << setw(9) << fixed << setprecision(2) << lowB << endl;
            }
    
    totFee = balance - (monthly + lowB + Cfees);                            //total fees
    
    cout << "New Balance $" << setw(9) << fixed << setprecision(2) << totFee;
    
    //Exit Program
    return 0;
}