/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 9:30 PM
 * Purpose:  Input the users weight, Output the number
 * of cans of soda the user can consume before he/she hits the expiration quantity.
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

const float WTTOMAS = 45359.2/100; //Conversion lb to g

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float desW,             //desired weight of friend (lbs)
          mouM = 35,        //mouse mass (g) 
          mouK = 5,         //mass of sweetner that kills mouse (g)
          cokM = 350,       //mass of can (g)
          cokC = 0.001f,    //concentration of sweetner in can (g)
          wtK,              //Solve to see wt kill a person (lbs)
          desK,             //lbs to g
          cok1C;            //Solve to see amoint of sweetner in one can (g)

    int  numC;              //how many cans to kill friend
          
         
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    
    cin >> desW;
    
    wtK = mouK / mouM * desW;       
    desK = wtK * WTTOMAS;           //Conversion
    cok1C = cokM * cokC;
    numC = desK / cok1C;
    
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<< numC <<" cans";
    
    
    //Exit stage right or left!
    return 0;
}