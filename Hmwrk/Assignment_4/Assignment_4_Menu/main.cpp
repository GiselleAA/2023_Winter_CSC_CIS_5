/* 
 * File:   main.cpp
 * Author: Giselle Avila
 * Created on January 23th, 2023, 11:00 PM
 * Purpose:  Menu Template Assignment 4
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
    cout<<"0 To run Problem Gaddis 1"<<endl;
    cout<<"1 To run Problem Gaddis 2"<<endl;
    cout<<"2 To run Problem Gaddis 3"<<endl;
    cout<<"3 To run Problem Gaddis 4"<<endl;
    cout<<"4 To run Problem Gaddis 5"<<endl;
    cout<<"5 To run Problem Savtich 1"<<endl;
    cout<<"6 To run Problem Savtich 2"<<endl;
    cout<<"7 To run Problem Savtich 3"<<endl;
    cout<<"8 To run Problem Savtich 4"<<endl;
    cout<<"9 To run Problem Savtich 5"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
    case '0':
    {
             //Declare Variables
        int number;                 //inputed value
        int result = 0;

        cin >> number;

        while (number < 0)               //had to be positive!
           {
               cout << "ERROR: Input a positive number! Try again!";

               cin>>number;

           }
               for (int i = 1; i <= number; i++)
            {
                cin >> number;
                result += i;

            }

            cout << "Sum = " << result;

             break; 
        }
            
        
    
        case '1': 
        {
             //Declare Variables
            int numDays;            //number of days worked

            int salary = 1,         //current salary
                tolSal = 0;         //overall salary


            cin >> numDays;

            //Initialize or input i.e. set variable values


            //Map inputs -> outputs

             for(int i = 0; i < numDays; i++)   
            {
                tolSal += salary;
                salary *= 2;
            }

            //Display the outputs

            cout << setprecision(2) << fixed;
            cout << "Pay = $" << tolSal * 0.01;
            
            break;
        } 
        
        case '2':
        {
            const int END = -99;               //value expected to end program
            int max,                        //max value
                min,                        //min value
                num;                        //inputted number

            cin >> num;                     //input value for number

            min = max = num; 

            while(num != END)
            {
               if(num < min)
               {
                   min = num;
               }
               if(num > max)
               {
                   max = num;
               }

            cin>>num;

           }
             cout << "Smallest number in the series is " << min << endl << "Largest  number in the series is " << max;

            break;
        }
        case '3': 
        {
            //Set the random number seed
            char let;                                   //used character 
            int num;                                    //number less than 15 or greater than 0

            //Initialize Variables
            cin >> num >> let;

            while(num > 15 || num <= 0)                 //number has to be less than 15 or greater than 0, try again
            {
                cin >> num >> let;                  
            }

            for(int i = 0; i < num; i++)            
            {
                for(int j = 1; j <= num; j++)           //letter will be printed the unmber of times requested
                {
                    cout << let;              
                }

                   if(i < num - 1)                      //removes extra endl
                   {
                        cout << endl;
                   }
            }
            break;
        }
        case '4': 
        {
            int num;                                            //number inputed
            char cros = '+';                                    //pattern used
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                for (int k = 0; k <= i; k++)
                {
                    cout << cros;
                }

                cout << endl;

                if (i != num)
                {
                    cout << endl;
                }
            }

            for (int i = 0; i < num; i++)
            {
                for (int k = num; k > i; k--)
                {
                    cout << cros;
                }
                if (i != num-1)
                {
                    cout << endl << endl;
                }
            }
            break;
        }
        case '5': 
        {
             //Declare Variables
    float mpg;        //miles per gallon
    int   liters,     //number of liters of gasoline consumed by the user’s car     
          miles;      //number of miles traveled by the car
    float Lit_Gal = 0.264172f;
    char ans;         //yes or no to run program again      
  
    while (ans != 'n')                                        
    {
        cout << "Enter number of liters of gasoline:" << endl;          //Asking for liters used 
        cin >> liters;
        cout << endl;
        
        cout << "Enter number of miles traveled:" << endl;              //Asking for miles traveled
        cin >> miles;
        cout << endl;

        mpg = miles /(liters * Lit_Gal);                                //calculated miles per gallon
        
        cout << "miles per gallon:" << endl;                            //outputing miles per gallon
        cout << setprecision(2) << fixed << mpg << endl;

        
        cout << "Again:" << endl;                                       //yes or no to run program again
        cin >> ans;
        
        if (ans == 'y' || ans == 'Y')
        {
            cout << endl;
        }
    }
       
    
            break;
            
        }
        case '6': 
        {
            
            float mpg1, mpg2;        //miles per gallon for car 1 and car 2
    float   liters1,           //number of liters of gasoline consumed by the user’s car     
            miles1;            //number of miles traveled by the car
     float Lit_Gal = 0.264172f;     
    char  ans;                //yes or no to run program again      
  
    while (ans != 'n')                                       
    {
        cout << "Car 1" << endl;                                        //car 1
        cout << "Enter number of liters of gasoline:" << endl;          //Asking for liters used 
        cin >> liters1;
        
        cout << "Enter number of miles traveled:" << endl;              //Asking for miles traveled
        cin >> miles1;

        mpg1 = miles1 /(liters1 * Lit_Gal);                             //calculated miles per gallon
        
        cout << "miles per gallon: ";                                   //outputing miles per gallon
        cout << fixed << setprecision(2) << showpoint << mpg1 << endl;
        cout << endl;

        cout << "Car 2" << endl;                                        //car 2
        cout << "Enter number of liters of gasoline:" << endl;          //Asking for liters used 
        cin >> liters1;
        
        cout << "Enter number of miles traveled:" << endl;              //Asking for miles traveled
        cin >> miles1;

        mpg2 = miles1 / (liters1 * Lit_Gal);                             //calculated miles per gallon
        
        cout << "miles per gallon: ";                                   //outputing miles per gallon
        cout << fixed << setprecision(2) << showpoint << mpg2 << endl;
        cout << endl;
        
        
        if (mpg1 > mpg2)                                                //determining if it is efficient 
        {
            cout << "Car 1 is more fuel efficient" << endl;
            cout << endl;
        }
        else if (mpg2 > mpg1)
             cout << "Car 2 is more fuel efficient" << endl << endl;
        else
            cout << "Both cars have the same fuel efficiency" << endl << endl;
        
        
        cout << "Again:" << endl;                                        //yes or no to run program again
        cin >> ans;
        
        if (ans == 'y' || ans == 'Y')
        {
            cout << endl;
        }
    }
            break;
        }
        case '7':{ 
            //Declare Variables
    float curP,                     //Current Price
          yrP,                      //Old price
          
          infla,                    //inflation rate
          prnt;                     //percent (infla * 100)
          
         

    char ans;
    
    
  while (ans != 'n')                                        
  {
       cout << "Enter current price:" << endl;
       cin >> curP;
       
       cout << "Enter year-ago price:" << endl;
       cin >> yrP;
       
       infla = (curP / yrP) - 1;                        //calculates inflation
       prnt = infla * 100;                              //percentage form
       
       cout << "Inflation rate: " << setprecision(2) << fixed << prnt << "%" << endl;
       cout << endl;
       
       cout << "Again:";                                //Allows user to do process again
       cout << endl;
       cin >> ans;
       
       if (ans == 'y')
       {
         cout << endl;  
       }

   } 
            break;
        }
        case '8':
        {
            //Declare Variables
     float curP,                     //Current Price
          yrP,                      //Old price
          
          infla,                    //inflation rate
          prnt,                     //percent (infla * 100)
          
          yr1,                      //year 1 price
          yr2;                      //year 2 price
         

    char ans;
    
    
  while (ans != 'n')                                        
  {
       cout << "Enter current price:" << endl;
       cin >> curP;
       
       cout << "Enter year-ago price:" << endl;
       cin >> yrP;
       
       infla = (curP / yrP) - 1;                        //calculates inflation
       prnt = infla * 100;                              //percentage form
       
       cout << "Inflation rate: " << setprecision(2) << fixed << prnt << "%" << endl;           //prints inflation rate
       cout << endl;
       
       yr1 = curP + curP * infla;                       //calculates the price in one year
       yr2 = yr1 * infla + yr1;                         //caluculated the price in two years while use info from year 1
            
       cout << "Price in one year: " << setprecision(2) << fixed << "$" << yr1 << endl;
       cout << "Price in two year: " << setprecision(2) << fixed << "$" << yr2 << endl;
       cout << endl;
       
       
       cout << "Again:";                                //Allows user to do process again
       cout << endl;
       cin >> ans;
       
       if (ans == 'y')                          
       {
         cout << endl;  
       }

   } 
            break;
        }
        case '9':
        { 
            //Declare Variables
    float num1, num2, num3, max2, max3;                         //3 inputs, max for 2 parameters, max for 3 parameters
    
    cout << "Enter first number:" << endl << endl;
    cin >> num1;
    
    cout << "Enter Second number:" << endl << endl;
    cin >> num2;
    
    cout << "Enter third number:" << endl << endl;
    cin >> num3;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    if(num1 > num2)
    {
        max2 = num1;
    }
        else 
        {
            max2 = num2;
        }
    
    if(num1 > num2 && num1 > num3)
    {
        max3 = num1;
    }
        else if(num2 > num1 && num2 > num3)
        {
            max3 = num2;
        }
            else
            {
                max3 = num3;
            }
    //Display the outputs
    
    cout << "Largest number from two parameter function:" << endl << max2 << endl << endl;
    cout << "Largest number from three parameter function:" << endl << max3 << endl;
    
            break;
        }
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}
