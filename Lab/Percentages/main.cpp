/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 13, 2023, 9:00 PM
 * Purpose: To calculate the military budget as a percentage of the federal 
 * budget for federal and military budget;
 *                           
 */

//System Libraries
#include <iostream>
//Input Output Library
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
    float milBdgt,fedBdgt,mlPrcnt;

        milBdgt = 7.77e11f;    //Military Budget = 777 Billion   
        fedBdgt = 6.272e12f;    //Federal Budget  = 6.272 Trillion
    //Initialize Variables
    mlPrcnt = (milBdgt / fedBdgt) * 100;
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "What is the military budget as a percentage of the federal budget?" << endl;
    cout << mlPrcnt << "%\n" << "After rounding, "
         << fixed << noshowpoint << setprecision(0) << mlPrcnt << "%";
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}


