/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 10:37 PM
 * Purpose:  Write a program that determines whether a meeting room is in violation of fire law regulations regarding the maximum room capacity
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
    int maxP,               //max amount of people allowed
        amoP,               //amount of people in room
        morP,               //amount of people that can be added while being legal
        lesP;               //amount of people to be removed to make it legal
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxP >> amoP;
    
     lesP = amoP - maxP;        //solving for people removal
     morP = maxP - amoP;        //solving for added people allowed 
     
    if (maxP < amoP){                                               
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << lesP << " to avoid fire violation.";
    }
        
         else {
           cout << "Meeting can be held." << endl;
           cout << "Increase number of people by " << morP << " will be allowed without violation.";
        }
    //Exit stage right or left!
    return 0;
}