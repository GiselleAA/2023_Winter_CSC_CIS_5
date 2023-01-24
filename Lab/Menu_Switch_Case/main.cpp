/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 22nd, 2023, 9:00 PM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
    cout<<"1 To run Problem Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"2 To run Problem Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
    cout<<"3 To run Problem Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"4 To run Problem Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    cout<<"5 To run Problem Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
    cout<<"6 To run Problem Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    cout<<"7 To run Problem Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
    cin>>chose;

    //Map/Process the Inputs -> Outputs
    switch(chose)
    {
        case '0': {
            

                    //Declare Variables
                    string name1, name2, name3;                                 //variables for 3 names
                    //Initialize or input i.e. set variable values

                    //Map inputs -> outputs

                    //Display the outputs
                     cout << "Sorting Names\n" << "Input 3 names\n";
                     cin  >> name1 >> name2 >> name3;                           //Input value names

                     if(name1 < name2 && name2 < name3)                         //if statement sorting out names value/alphabet order
                            {
                                cout << name1 << endl << name2 << endl << name3;
                            }

                     if(name2 < name1 && name1 < name3)
                            {
                                 cout << name2 << endl << name1 << endl << name3;
                            }

                     if(name3 < name1 && name1 < name2)
                            {
                                cout << name3 << endl << name1 << endl << name2;
                            }

                     if(name2 < name3 && name3 < name1)
                            {
                                cout << name2 << endl << name3 << endl << name1;
                            }

                     if(name3 < name2 && name2 < name1)
                            {
                                cout << name3 << endl << name2 << endl << name1;
                            }


                    //Exit stage right or left!

                            }
                        break; 
                    
        case '1':{//Declare Variables
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
        }
         break;
         
        case '2':{   //Declare Variables
    float   monthly = 10,           //monthly charge
            Cfees,                  //check fees
            balance,                //account Balance 
            lowB = 0,               //account low
            totFee;                 //total fees for the month
            
    int     checks;                 //amount of checks written
    
    //Initialize Variables
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks"<< endl;
    cin >> balance >> checks;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if Customers Account Balance is overdrawn, if so
    //Display an Urgent message
    if (checks < 0)
    {
        return 0;
    }
    
        if (balance <= 0)
            {
            
            cout<<"Sorry, your bank account is OVERDRAWN." << endl;
            
            }
        
            else
                {
                       cout << "Balance" << setw(6) << "$" << setw(9) << fixed << setprecision(2) << balance << endl;
                }


    //Display Inputs/Outputs
    
    if (checks > 0 && checks <= 19)
    {
        
        Cfees = (checks * 0.10);
    }

           else if (checks >= 20 && checks <= 39)
            {
                Cfees = (checks * 0.08);
            }
    
                else if (checks >= 40 && checks <= 59)
                {
                    Cfees = (checks * 0.06);
                }
    
                        else 
                        {
                            Cfees = (checks * 0.04);
                        }


    cout << "Check Fee   $" << setw(9) << fixed << setprecision(2) << Cfees << endl;
    cout << "Monthly Fee $" << setw(9) << fixed << setprecision(2) << monthly << endl;
    

    if (balance < 400)
    {
        lowB = 15.00;
        cout << "Low Balance $" << setw(9) << fixed << setprecision(2) << lowB << endl;
    }
            else 
            {
                lowB = 0;
                cout << "Low Balance $" << setw(9) << fixed << setprecision(2) << lowB << endl;
            }
    
    totFee = balance - (monthly + lowB + Cfees);                            //total fees
    
    cout << "New Balance $" << setw(9) << fixed << setprecision(2) << totFee;}
        break;
        
        case '3':{  string name1, name2, name3;                             //three runners
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
        }
         break;
         
        case '4': {
             float billR,                                                                          //amount total, amount of hours
          hrs;                       
    char  plan;                                                                            //plan for three different subscription packages for its customers

    //Initialize or input i.e. set variable values
    
    cout << "ISP Bill" << endl << "Input Package and Hours" << endl;
    
    cin >> plan >> hrs;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    //Display the outputs

    
    if (!(hrs < 744))                                                                      //Also, the number of hours used in a month cannot exceed 744.
    {   
        cout << "Invalid input. Please try again.";
    }
    
    if (!(plan == 65 || plan == 66 || plan == 67))
    {
        cout << "I'm sorry, but that isn't plan A, B, or C. Please try again.";           //If not enter A B or C
    }
    
    //the 3 packages below    
        
        if (plan == 65)                                                                   //Plan A
        {
                if (hrs > 10) 
                {
                    billR = 9.95 + ((hrs - 10) * 2.00f);
                    cout << "Bill = $" << setw(6) << billR;
                }
                else 
                {
                    billR = 9.95;
                    cout << "Bill = $" << setw(6) << billR;
                }
        }
    
    
    
    if (plan == 66)                                                                         //Plan B
    {
            if (hrs > 20)
            {
                billR = 14.95 + ((hrs-20) * 1.00f);
                cout << "Bill = $" << setw(6) << billR;
            }
            else 
            {
                billR = 14.95;
                cout << "Bill = $" << setw(6) << billR;
            }
    }
    
    
    
    if (plan == 67)                                                                         //Plan C
    {
            billR = 19.95f;
            cout << "Bill = $" << setw(6) << billR;
    }
        }
        break;
        
        
        case '5':{
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
        }
        break;
        
        
        case '6':{
             int zero3, zero2, zero1, nozero;               //To determine how many 1's,10's,100's,1000's
    unsigned short arab;
    string rom = "";

    //Initialize Variables here
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    
    
    cin >> arab;                                         //input value 
    
    zero3  = arab / 1000;                                //converting process
    zero2  = (arab - zero3 * 1000) / 100;
    zero1  = arab % 100/ 10;
    nozero = arab % 10;

    //Map inputs/knowns to the output




    switch(zero3)
    {                                                     //1000
        case 3: rom += "M";
        case 2: rom += "M";
        case 1: rom += "M";
    }



    switch(zero2)
    {                                                       //100
            case 9:     
            {
                rom += "C";
                rom += "M";
                break;
            }
        
            case 8: case 7: case 6: 
            {
                rom += "D";
                for (int i = 0; i < zero2 - 5; i++) rom += "C";
                break;
            }
            
            case 5: 
            {
                rom += "D";
                break;
            }
        
            case 4: 
            {
                rom += "C";
                rom += "D";
                break;
            }
            
            case 3: case 2: case 1: 
            {
                for (int i = 0; i < zero2; i++) rom += "C";
             break;
            }

    }




     switch(zero1)                                              //10
     {
            case 9: 
            {
                rom += "X";
                rom += "C";
                break;
            }
            case 8: case 7: case 6: 
            {
                rom += "L";
                for (int i = 0; i < zero1 - 5; i++) rom += "X";
                break;
            }
            case 5: 
            {
                rom += "L";
                break;
            }
            case 4:
            {
                rom += "X";
                rom += "L";
                break;
            }
            case 3: case 2: case 1: 
            {
                
                for (int i = 0; i < zero1; i++) rom += "X";
                break;
            }
    }




    switch(nozero)                                          //1
    {
            case 9: 
            {
                rom += "I";
                rom += "X";
                break;
            }
            
            case 8: case 7: case 6: 
            {
                rom += "V";
                for (int i = 0; i < nozero - 5; i++) rom += "I";
                break;
            }
            
            case 5: 
            {
                rom += "V";
                break;
            }
            
            case 4: 
            {
                rom += "I";
                rom += "V";
                break;
            }
            
            case 3: case 2: case 1: 
            {
                for (int i = 0; i < zero1; i++) rom += "I";
                break;
            }
    }
    
    
             if (arab < 1000 || arab > 3000)
                    cout << arab << " is Out of Range!";
                else
                    cout << arab << " is equal to " << rom;
        
        }
        break;
        
        
        case '7':{
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
     
        }
        break;
       
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}