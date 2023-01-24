/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 19, 2023, 5:48 PM
 * Purpose:  Write a program that asks for the names of three runners and the time it took each of them to finish a race. 
 * The program should display who came in first, second, and third place.
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

int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;                             //three runners
    int time1, time2, time3;                                //three times
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    
    cin >> name1;           //runner 1 information
    cin >> time1;
    
    cin >> name2;           //runner 2 information
    cin >> time2;
    
    cin >> name3;           //runner 3 information
    cin >> time3;
    
    
 

        			if (time1 < time2 && time2 < time3)                                                 //If runner 1 got first then either 2 or 3 are second or third
        			{
        				cout << name1 << '\t' << fixed << setw(3) << time1 << endl;
        				cout << name2 << '\t' << fixed << setw(3) << time2 << endl;
        				cout << name3 << '\t' << fixed << setw(3) << time3;
        			}
        			
        			if (time1 < time3 && time3 < time2)
        			{
        				cout << name1 << '\t' << fixed << setw(3) << time1 << endl;
        				cout << name3 << '\t' << fixed << setw(3) << time3 << endl;
        				cout << name2 << '\t' << fixed << setw(3) << time2;
        			}
        		
        		
        		
        		
        			if (time2 < time1 && time1 < time3)                                              //If runner 2 got first then either 1 or 3 are second or third
        			{
        				cout << name2 << '\t' << fixed << setw(3) << time2 << endl;
        				cout << name1 << '\t' << fixed << setw(3) << time1 << endl;
        				cout << name3 << '\t' << fixed << setw(3) << time3;
        			}
        		
        			if (time2 < time3 && time3 < time1)
        			{
        				cout << name2 << '\t' << fixed << setw(3) << time2 <<endl;
        				cout << name3 << '\t' << fixed << setw(3) << time3 <<endl;
        				cout << name1 << '\t' << fixed << setw(3) << time1;
        			}
        			
        			
        			
        			
        			
        			if (time3 < time1 && time1 < time2)                                               //If runner 3 got first then either 1 or 2 are second or third
        			{
        				cout << name3 << '\t' << fixed << setw(3) << time3 << endl;
        				cout << name1 << '\t' << fixed << setw(3) << time1 << endl;
        				cout << name2 << '\t' << fixed << setw(3) << time2;
        			}
        			
                	if (time3 < time2 && time2 < time1)
            		{
            			cout << name3 << '\t' << fixed << setw(3) << time3 << endl;
            			cout << name2 << '\t' << fixed << setw(3) << time2 << endl;
            			cout << name1 << '\t' << fixed << setw(3) << time1;
            		}
    
    //Display the outputs
    
    //above it is outputing the winners 
    
    //Exit stage right or left!
    return 0;
}