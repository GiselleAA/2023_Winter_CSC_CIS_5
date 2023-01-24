/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 22, 2023, 8:50 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl<<endl;
    
    //Row 1
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<< "      ";
    cout<<(!(x&&y)?'T':'F')<< "       ";
    cout<<(!x||!y?'T':'F')<< "      ";
    cout<<(!(x||y)?'T':'F')<< "       ";
    cout<<(!x&&!y?'T':'F')<< "        ";
    cout<<endl;
            
    //Row 2
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<< "      ";
    cout<<(!(x&&y)?'T':'F')<< "       ";
    cout<<(!x||!y?'T':'F')<< "      ";
    cout<<(!(x||y)?'T':'F')<< "       ";
    cout<<(!x&&!y?'T':'F')<< "        ";
    cout<<endl;

    //Row 3
    x=false;
    y=true;
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<< "      ";
    cout<<(!(x&&y)?'T':'F')<< "       ";
    cout<<(!x||!y?'T':'F')<< "      ";
    cout<<(!(x||y)?'T':'F')<< "       ";
    cout<<(!x&&!y?'T':'F')<< "        ";
    cout<<endl;

    //Row 4
    x=false;
    y=false;
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<< "      ";
    cout<<(!(x&&y)?'T':'F')<< "       ";
    cout<<(!x||!y?'T':'F')<< "      ";
    cout<<(!(x||y)?'T':'F')<< "       ";
    cout<<(!x&&!y?'T':'F')<< "        ";
    cout<<endl;

    //Exit the Program
    return 0;
}