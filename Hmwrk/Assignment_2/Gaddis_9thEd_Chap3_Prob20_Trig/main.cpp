/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 7:36 PM
 * Purpose:  Write a program that asks the user for an angle, entered in degrees.
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle,                        //Angle input in degrees
          resltS,                       //results of sin 
          resltT,                       //results of tangent
          resltC,                       //results of cosine
          outD;                         //degrees
    
    //Initialize or input i.e. set variable values
      
    
    //Map inputs -> outputs
    
    //Display the outputs
   cout << "Calculate trig functions" << endl;
   cout << "Input the angle in degrees." << endl;
   cin  >> angle;                                       //input for degrees
   
    outD = angle * (M_PI/180);                          //solving for values:sin tan cosine
    resltS = sin(outD);
    resltC = cos(outD);
    resltT = tan(outD);
   
   //Displating values while being mindful of points in numbers
   cout << "sin(" << angle << ") = " << fixed << setprecision(4) << resltS << endl;
   cout << noshowpoint<<setprecision(0) << "cos(" << angle << ") = " << fixed << setprecision(4) << resltC << endl;
   cout << noshowpoint<<setprecision(0) <<"tan(" << angle << ") = " << fixed << setprecision(4) << resltT;

    //Exit stage right or left!
    return 0;
}