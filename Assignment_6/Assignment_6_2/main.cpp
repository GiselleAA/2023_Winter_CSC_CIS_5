/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created: Feb. 7, 2023
 * Purpose:  Product Table
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;
const int ROWS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
  //  fillTbl(tblProd,ROWS);
    
    //Display the outputs
    prntTbl(tblProd,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int [ROWS][COLS],int numRows)
{
    for(int row = 1; row <= numRows; row++)
    {
        
        cout << setw(4) << row;
    }
}

void prntTbl(const int [ROWS][COLS],int print)
{
    cout << "Think of this as a Product/Muliplication Table" << endl;
    cout << "           C o l u m n s" << endl;
    
    cout << "     |";

for(int row = 1; row <= ROWS; row++)
{
    cout << setw(4)  << row;
}

    cout << endl;
    
    cout << "----------------------------------" << endl;

for(int row = 1; row <= 6; row++)
{
    
    if(row == 1)
        cout <<"   ";
    if(row == 2)
        cout <<"R  ";
    if(row == 3)
        cout <<"O  ";
    if(row == 4)
        cout <<"W  ";
    if(row == 5)
        cout <<"S  ";
    if(row == 6)
        cout <<"   ";
    
    cout << row << " |";
    
            for(int col = 1; col <= 6; col++)
            {
                cout << setw(4) << row * col;
            }
            cout << endl;
    }
}