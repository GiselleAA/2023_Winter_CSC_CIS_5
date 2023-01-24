/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 18, 2023
 * Purpose: Write a program to score the paper-rock-scissor game. Each of two users types in either P, R, or S.
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
    char play1, 
         play2;                                            //the 2 players
         
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    
    cin >> play1 >> play2;
    
    //not case sensitive 
    
        if ((play1 == 'R' || play1 == 'r') && (play2 == 'S' || play2 == 's'))           ///Rock winner
        {
            cout << "Rock breaks scissors.";
        }
     
        if ((play1 == 'R' || play1 == 'r') && (play2 == 'P' || play2 == 'p'))           //paper winner 
        { 
             cout << "Paper covers rock.";
        }
    
        if ((play1 == 'R' || play1 == 'r') && (play2 == 'R' || play2 == 'r'))           //no winner
        {
            cout << "Nobody wins.";                                                     //sad
        }
    
    
    
         if ((play1 == 'S' || play1 == 's') && (play2 == 'P' || play2 == 'p'))           //scissors winner
        {
            cout << "Scissors cuts paper.";
        }
    
        if ((play1 == 'S' || play1 == 's') && (play2 == 'R' || play2 == 'r'))           //rock winner
        {
           cout << "Rock breaks scissors.";
        }
    
        if ((play1 == 'S' || play1 == 's') && (play2 == 'S' || play2 == 's'))           //no winner
        {
            cout << "Nobody wins.";
        }
    
    
    
    
        if((play1 == 'P' || play1 == 'p') && (play2 == 'R' || play2 == 'r'))           //paper winner
        {
            cout << "Paper covers rock."; 
        }
        
        if ((play1 == 'P' || play1 == 'p') && (play2 == 'S' || play2 == 's'))           //Scissors winner     
        {
            cout << "Scissors cuts paper.";
        }

        if((play1 == 'P' || play1 == 'p') && (play2 == 'P' || play2 == 'p'))           //no winner
        {
            cout << "Nobody wins.";
        }
    
        
        

    //Exit stage right or left!
    return 0;
}