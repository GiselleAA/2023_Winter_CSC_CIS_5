/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 13, 2023, 7:30 PM
 * Purpose: LAB - determine which of 2 stations to fill up at vs. the total 
 * cost of fillup taking into account the distance to the station along with the
 * price of gas.
 *                           
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
    float mPG = 16,                     //Mile per gallon
          sizGt = 22,                   //Size of Gas Tank Gallons
          fulGalr = 0.25,               //Fuel Gage Reading
          fuelFil,                      //To Fill the Tank in Gallons
          fuelFl2;                      //Final amount of gallons needed to fill up tank
    
        //Station 1 variables
        float disSM1 = 10,              //Distance from Station 1 miles
              gasUsd1 = 0.625,          //Gas used to get to station in Gallons
              prcGal1 = 3.85,           //Price per Gallon for Station 1
              galCst1;                   //Cost to Fill for Station 1            
    
       //Station 2 variables
       float disSM2 = 0.5,              //Distance from Station 2 miles
             gasUsd2 = 0.03125,         //Gas used to get to station in Gallons
             prcGal2 = 3.95,            //Price per Gallon for Station 2
             galCst2;                   //Cost to Fill for Station 2
                                                    
       
    //Initialize Variables
        fuelFil = sizGt * fulGalr;                       //Solving to Fill the Tank in Gallons
        fuelFl2 = sizGt - fuelFil;
        
        galCst1 = (fuelFl2 + gasUsd1) * prcGal1;         //Solving cost of Station 1
        galCst2 = (fuelFl2 + gasUsd2) * prcGal2 ;        //Solving cost of Station 2

    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    //Dialogue to show final solution
        cout << "Which station is better: Station 1 or Station 2? Let's check!\n"<< endl;
        cout << "First, we will look at our car information. " << endl 
             << "Miles per gallon: " << mPG << '\n' << "Tank size in gallons: "
             << sizGt << '\n' << "Gallons needed to Fill the Tank: " << fuelFl2 << endl;
        
        cout << "\nNow let's look at Station 1's information." << endl;
        cout << "Price per gallon: " << prcGal1 << '\n' << "Distance driven: " << disSM1 
             << " miles\n" << "Cost to Fill: $" << fixed << showpoint << setprecision(2) << galCst1 << endl;
          
        cout << "\nNext, let's look at Station 2's information." << endl;
        cout << "Price per gallon: " << prcGal2 << '\n' << "Distance driven: " << disSM2 
             << " miles\n" << "Cost to Fill: $"  << galCst2 << endl;
        
        cout<< "\nAfter comparing, clearly Station 2 is the better option." ;
        
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}
