/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 19, 2023
 * Purpose:  Horoscope Signs of the same Element are most compatible. There are 4 Elements in astrology, 
 * and 3 Signs in each: FIRE (Aries, Leo, Sagittarius), EARTH (Taurus, Virgo, Capricorn), AIR (Gemini, Libra, 
 * Aquarius) , WATER (Cancer, Scorpio, Pisces). According to some astrologers, you are most comfortable with your 
 * own sign and the other two signs in your Element. For example, Aries would be most comfortable with other Aries 
 * and the two other FIRE signs, Leo and Sagittarius.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string sign1, sign2, match1, match2;                //signs and comparing signs
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    
    
    
    cin  >> sign1 >> sign2;                                 //inputs of signs of two people
    
    
    
   if (sign1 == "Aries"  || sign1 == "Leo"     || sign1 == "Sagittarius")       //Sign 1, looking for type
       match1 = "Fire";
  
   if (sign1 == "Taurus" || sign1 == "Virgo"   || sign1 == "Capricorn")
       match1 = "Earth";
  
   if(sign1 == "Gemini" || sign1 == "Libra"   || sign1 == "Aquarius")
        match1 = "Air";
  
   if(sign1 == "Cancer" || sign1 == "Scorpio"   || sign1 == "Pices") 
        match1 = "Water";
        
        
   
   
    if (sign2 == "Aries"  || sign2 == "Leo"     || sign2 == "Sagittarius")      //Sign 2, looking for type
       match2 = "Fire";
  
    if(sign2 == "Taurus" || sign2 == "Virgo"   || sign2 == "Capricorn")
       match2 = "Earth";
  
    if(sign2 == "Gemini" || sign2 == "Libra"   || sign2 == "Aquarius")
        match2 = "Air";
  
    if(sign2 == "Cancer" || sign2 == "Scorpio"   || sign2 == "Pices") 
        match2 = "Water";

   


   if (match1 == match2)                                                                    //compare type of signs 
       cout << sign1 << " and " << sign2 << " are compatible " << match1 << " signs.";      //match 
   else 
      cout << sign1 << " and " << sign2 << " are not compatible signs.";                    //not a match
        
    //Display the outputs

    //Exit stage right or left!
    return 0;
}