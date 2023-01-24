/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 18, 2023, 7:21 PM
 * Purpose:  Write a program that asks the user to enter the number of books that he or she has
 * purchased this month and then displays the number of points awarded.
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
        int books, points;                                  //books inputed value by user, points depending on books bought
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
        cout << "Book Worm Points" << endl;
        cout << "Input the number of books purchased this month." << endl;
        cin >> books;
        cout << "Books purchased =" << setw(3) << books << endl;

        
            if(books == 0)                              //conditions depending on books bought giving outcome of points
            {
                points = 0;
            }
             if(books == 1)
            {
                points == 5;
            }
             if(books == 2)
            {
                points = 15;
            }
             if(books == 3)
            {
                points = 30;
            }
             if(books >= 4)
            {
                points = 60;
            }
        
        cout << "Points earned   =" << setw(3)  << points;              //outputs points earned after book purchase
        
    //Exit stage right or left!
    return 0;
}