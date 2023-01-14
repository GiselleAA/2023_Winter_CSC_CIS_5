/* 
 * File: main.cpp
 * Author: Giselle Avila
 * Date:1/13/23
 * Purpose: A1 Test Output Format - Simple Program to Test Output
 */

//System Libraries - Post Here
#include <iostream>
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
    //Stores inputed value
    int frstVal; 
    float secVal = 1.1; 

    //Initialize or input data here
    cin  >> frstVal;

    //Display initial conditions, headings here
    float updtSec = frstVal * secVal;

    //Process inputs  - map to outputs here

    //Format and display outputs here
    cout << frstVal << '\n' << updtSec  << '\n';
    cout << "Hello World     " << '\n';
    
    cout << "\tTab it!" << '\n';
    cout << "Compare . . . to space   ";
    //Clean up allocated memory here
    
    //Exit stage left
    return 1;
}