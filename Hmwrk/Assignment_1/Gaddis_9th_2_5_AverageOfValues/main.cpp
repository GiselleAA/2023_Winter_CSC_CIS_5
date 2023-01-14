/* 
 * File:   main.cpp
 * Author: Gaddis Chapter 2 Problem 5
 * Created on January 13, 2023, 10:50 PM
 * Purpose: Write a program that stores the following values in five different 
 * variables: 28, 32, 37, 24, and 33. The program should first calculate the 
 * sum of these five variables and store the result in a separate variable 
 * named sum. Then, the program should divide the sum variable by 5 to get tbe
 *  average. Display the average 
 * on the screen. 
 */
//System Libraries
#include <iostream> //Input Output Library
using namespace std;

//User Libraries

//Global Constants and not Variables 
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    
    //Initialize Variables
    const int FIVE = 5;
    float valOne = 28,
        valTwo = 32,
        valThre = 37,
        valFor = 24,
        valFiv = 33,
         sum,                   //sum of five numbers
         avg;                   //average of five numbers
    //Map/Process the Inputs -> Outputs
    sum = valOne + valTwo + valThre + valFor + valFiv;      //solving for sum
    avg = sum / FIVE;                                       //solving for average
    
    //Display Inputs/Outputs
    cout << "The overall average of the FIVE numbers are: " << avg << endl;
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

