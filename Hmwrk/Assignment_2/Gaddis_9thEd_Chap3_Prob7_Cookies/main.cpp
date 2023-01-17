/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 15, 2023, 6:47 PM
 * Purpose:  Write a program that asks the user to input how many cookies he or she actually ate and then 
 * reports how many total calories were consumed. 
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
    
    int   cokBag = 40,                              //amount of cookies in bag
          cokSer = 10,                              //amount of servings in bag
          cokCal = 300,                             //amount of calories per serving
          
          cokPer = cokCal / (cokBag/cokSer) ,       //amount of calories per cookie
          
          cokAte,                                   //amount of cookies ate
          cokTol;                                   //amount of calories from total of cookies ate
          
    
    //Initialize or input i.e. set variable values
                           //solving for calories ate
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin  >> cokAte;
    
     cokTol = cokPer * cokAte;                       //solving for calories ate
    
    cout << "You consumed " << cokTol << " calories.";
    //Exit stage right or left!
    return 0;
}