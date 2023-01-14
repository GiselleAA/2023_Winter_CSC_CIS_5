/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Date: 1/13/2023
 * Purpose: A2 More Test Output Format- Utilizing the iomanip Library
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float valOne, valTwo, valThre, valFor;
    //Initialize or input data here
    cin >> valOne >> valTwo >> valThre >> valFor;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout<<setw(9)<<valOne<<fixed<<showpoint<<setprecision(1)<<setw(10)<<valOne<<setprecision(2)<<setw(10)<<valOne<<endl;
    
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<valTwo<<fixed<<showpoint<<setprecision(1)<<setw(10)<<valTwo<<setprecision(2)<<setw(10)<<valTwo<<endl;
    
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<valThre<<fixed<<showpoint<<setprecision(1)<<setw(10)<<valThre<<setprecision(2)<<setw(10)<<valThre<<endl;
    
    cout<<noshowpoint<<setprecision(0)<<setw(9)<<valFor<<fixed<<showpoint<<setprecision(1)<<setw(10)<<valFor<<setprecision(2)<<setw(10)<<valFor;
 
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}