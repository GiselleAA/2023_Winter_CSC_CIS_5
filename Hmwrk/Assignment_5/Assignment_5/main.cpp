/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
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
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem MinMax"<<endl;
    cout<<"1 To run Problem Factorial"<<endl;
    cout<<"2 To run Problem isPrime" <<endl;
    cout<<"3 To run Problem Collatz Sequence"<<endl;
    cout<<"4 To run Problem Collatz Sequence with Output of Sequence"<<endl;
    
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':
        {
            
             int n[3], min = 0, max = 0; int n1, n2, n3;
    
    for(int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }
    
    //Initialize Variables
    
    
    //Process/Map inputs to outputs
   
    //Output data
    
    cout << "Input 3 numbers" << endl;
    cout << "Min = "  << min << endl; 
    cout << "Max = "  << max;
    
    //Exit stage right!
    return 0;
}
            break;
        }
        case '1':
        {
              int num;
    //Process/Map inputs to outputs
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    cout << "Input the number for the function." << endl;
    
    cin >> num;
    
    
      for(int i = 0; i < 3; i ++)                            
     {
         
        if(n1 <= n2 && n1 <= n3)                    //Solving for min value out of three integers
        {
            min = n1;                               
        }
            else if(n2 <= n1 && n2 <= n3)
            {
                min = n2;
            }
                else if(n3 <= n1 && n3 <= n2)
                {
                    min = n3;
                }
                
         
        if(n1 >= n2 && n1 >= n3)                    //Solving for max value out of three integers
        {
            max = n1;
        }
            else if(n2 >= n1 && n2 >= n3)
            {
                max = n2;
            }
                else if(n3 >= n1 && n3 >= n2)
                {
                    max = n3;
                }
    
     if(num < 0)                                      //if the number is under 0 then the value is undefined
    {
        cout << "Undefined";                        //therefore print out undefined
    }
        else if(num == 0)                           //if num is equal to 0 then print 1
        {
            return 1;
        }
            else
            {
                return num * (num - 1);        //Solving process for factorial if not less than 0 and equal to 0
            }
    
    
    
    
        cout << num << "! = " << (num);

            
        
            break;
        }
        case '2':
        {
            int num;
            int i; 
            int prime;
            cout << "Input a number to test if Prime."<< endl;
    cin >> num;
    
    if (num == 0 || num == 1)                 //Prime or not?
        prime = false;
    
      for (int i = 2; i <= num / 2; ++i) 
      {
        if (num % i == 0) 
        {
          prime = false;
          break;
        }
        
    if ((num))
        cout << num << " is prime.";
    else
        cout << num << " is not prime.";
            break;
        }
        case '3':
        {
             int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    
    
    int seq = 0;
    
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
            else
            {
                n = 3 * n + 1;
            }
                 seq++;
    }
    
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
           n + 1<<" steps";
    
            break;
        }
        case '4':
        {

                
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    
    
    
     int seq = 0;
    cout << n;
    
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
            else
            {
                n = 3 * n + 1;
            }
                 seq++;
                 
                 cout << ", " << n;
    }
    
    //Output data
    cout<< endl << "Sequence start of "<<n<<" cycles to 1 in "<<
            n + 1<<" steps";
    
    //Exit stage right!
    return 0;
                
                
                break;        }
        
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}