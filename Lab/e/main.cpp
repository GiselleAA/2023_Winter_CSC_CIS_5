/* 
 * File:   main.cpp
 * Author: YOUR NAME GOES HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
string outRed(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }
    while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN)
{
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1()
{
      //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
if((shape=='x' || shape == 'X') && x % 2 == 1)                // ODD x shape if x % 2 == 1 Ex: 47 % 2 = 1
{                                                  
        for(int row = x; row >= 1; row--)
        {
            for(int col = x; col >= 1; col--)
            {
                if((row == col) || (( row + col ) == x + 1))        //if row and column are the same or row + column = total input + 1
                {
                    cout << col;                                  
                }
                    else
                    {
                        cout << " ";                        //if not leave space
                    }
            }
            cout << endl; 
        }
    }
    
    if((shape == 'x'|| shape == 'X') && x % 2 == 0)           // EVEN x shape if x % 2 == 0 Ex: 46 % 2 = 0
    {
        for(int row = 1; row <= x; row++)
        {
            for(int col = 1; col <= x; col++)
            {
                if((row == col)||((row + col) == x + 1))                    //if row and column are the same or row + column = total input + 1
                {
                    cout << col;                                  
                }
                    else
                    {
                        cout<<" ";                          //if not leave space
                    }
            }
            cout<<endl; 
        }
    }
    
    
    if((shape=='B'|| shape == 'b') && x % 2 == 1)                   //ODD B backward lash shape
    {
         for(int row = x; row >= 1; row--)
        {
            for(int col = x; col >= 1; col--)
            {
                if(row == col)                                      //if row and column the same then print
                {
                    cout << col;                                  
                }
                    else
                    {
                        cout << " ";                            //if not leave space
                    }
            }
            cout << endl; 
        }
    }
    
    if((shape=='B'|| shape == 'b') && x % 2 == 0)                   //EVEN B backward lash shape
    {
         for(int row = 1; row <= x; row++)
        {
            for(int col = 1; col <= x; col++)
            {
                if(row == col)                                       //if row and column the same then print
                {
                    cout <<  row;                                  
                }
                    else
                    {
                        cout << " ";                            //if not leave space
                    }
            }
            cout << endl; 
        }
    }

  if((shape=='F'|| shape == 'f') && x % 2 == 1)                   //ODD F forward lash
    {
        
         for(int row = 1; row <= x; row++)
    {
            for(int col = x; col >= 1; col--)
            {
                if((row == col))                                      //if row + column = total input + 1 then print
                {
    
                    cout << row;                                  
                }
                    else
                    {
                        cout << " ";                            //if not leave space
                    }
            }
            cout << endl; 
        }
    
    }
   
    if((shape=='F'|| shape == 'f') && x % 2 == 0)                 //EVEN F forward lash
    {
        
         for(int row = x; row >= 1; row--)
    {
            for(int col = x; col >= 1; col--)
            {
                if((row + col)== x + 1)                                  //if row + column = total input + 1 then print
                {
    
                    cout << row;                                  
                }
                    else
                    {
                        cout << " ";                            //if not leave space
                    }
            }
            cout << endl; 
        }
    
    }
}

void problem2()
{
    int i, k;
char histo[3];           

cout<<"Create a histogram chart."<<endl;
cout<<"Input 4 digits as characters."<<endl;

for(i = 0; i < 4; i++)                                   //4 user inputs (note: no letters = "?")
{
    cin >> histo[i]; 
}

if((histo[4] - '0') % 2)
{
    for(i = 3; i >= 0; i--)
    {
        cout << histo[i] << " ";                         //prints user number before *
        
        if ((histo[i] >= '0') && (histo[i] <= '9'))
        {
            for(k = 0; k < (histo[i] - '0'); k++)   
            {
                cout << "*";                            //printing of *
            }
        }
        
        cout << endl;
    }

}

else
{
    for(i = 3; i >= 0; i--)
    {
        
        cout << histo[i] << " ";                             //prints user input before * or ?
    
        if ((histo[i] >= '0') && (histo[i] <= '9'))
        {
            for(k = 0; k < (histo[i] - '0'); k++)
            {
                 cout << "*";                               //printing of *
 
            }
        }
            else
            {
                cout << "?";                                //when user inputs letter 
            }
        
        cout << endl;
    }

}
}

void problem3()

{
    int n1000s,n100s,n10s,n1s;                             
    string red = "";
    
        //Declare all Variables Here
    int number;
   
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    
     
    //Calculate the 1000's, 100's, 10's and 1's
   
    n1000s=number/1000;  //Determine # 1000'S
    number-=n1000s*1000; //Subtract 
    n100s=number/100; 
    number-=n100s*100;
    n10s=number/10;    //Repeat process for all digits
    number-=n10s*10;
    n1s=number;  

    if(n1000s==3)red+="Three Thousand ";            //prints value depending on calculation
    if(n1000s==2)red+="Two Thousand ";
    if(n1000s==1)red+="One Thousand ";

   
    if(n100s==9)red+="Nine Hundred ";
    if(n100s==8)red+="Eight Hundred ";
    if(n100s==7)red+="Seven Hundred ";
    if(n100s==6)red+="Six Hundred ";
    if(n100s==5)red+="Five Hundred ";
    if(n100s==4)red+="Four Hundred ";
    if(n100s==3)red+="Three Hundred ";
    if(n100s==2)red+="Two Hundred ";
    if(n100s==1)red+="One Hundred ";
   
    

    if ((n10s == 1) && (n1s >= 1))                  //If there is one ten: prints teens situation
    {
                 
                 if(n1s == 1)
                 {
                     red+="Eleven ";
                 }                             
                  else if(n1s ==  2)
                  {
                      red+="Twelve ";
                  }
                  else if (n1s == 3)
                  {
                     red+="Thirteen ";
                  }
                  else if (n1s == 4)
                  {
                     red+="Fourteen ";
                  }
                  else if (n1s == 5)
                  {
                    red+="Fifteen ";
                  }
                  else if (n1s == 6)
                  {
                      red+="Sixteen ";
                  }
                  else if (n1s ==7)
                  {
                      red+="Seventeen ";  
                  }
                  else if (n1s ==8)
                  {
                      red+="Eighteen ";  
                  }
                  else if (n1s == 9)
                  {
                      red+="Nineteen ";  
                  }
       }
       
       else                                     //more than one ten prints tys situation
       {
                if(n10s==9)red+="Ninety ";
                if(n10s==8)red+="Eighty ";
                if(n10s==7)red+="Seventy ";
                if(n10s==6)red+="Sixty ";
                if(n10s==5)red+="Fifty ";
                if(n10s==4)red+="Fourty ";
                if(n10s==3)red+="Thirty ";
                if(n10s==2)red+="Twenty ";
              
       }
        if  ((n10s > 1) && (n1s > 0))             //1s situation
        { 

                if(n1s==9)red+="Nine ";
                if(n1s==8)red+="Eight ";
                if(n1s==7)red+="Seven ";
                if(n1s==6)red+="Six ";
                if(n1s==5)red+="Five ";
                if(n1s==4)red+="Four ";
                if(n1s==3)red+="Three ";
                if(n1s==2)red+="Two ";
                if(n1s==1)red+="One ";
     }
     
     else if (n10s == 0 && n1s >= 1)
    {
                    if(n1s==9)red+="Nine ";
                    if(n1s==8)red+="Eight ";
                    if(n1s==7)red+="Seven ";
                    if(n1s==6)red+="Six ";
                    if(n1s==5)red+="Five ";
                    if(n1s==4)red+="Four ";
                    if(n1s==3)red+="Three ";
                    if(n1s==2)red+="Two ";
                    if(n1s==1)red+="One ";
    }
     cout << red << "and no/100's Dollars"<<endl;
}

void problem4()
{
 char package;
    unsigned short hours;
    float packA, packB, packC;                                //Package A, Package B, Package C Overall Value
    float flatA = 16.99, flatB = 26.99, flatC = 36.99;        //Flat values of Packages (packC = FlatC)
    
    //Input or initialize values Here
    
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    
    if (hours <= 10)                                            //Package A Calculations
        { 
            packA = flatA;                  
        }
    if (hours > 10 && hours <= 20)
        {
            packA = ((hours - 10) * 0.95) + flatA;              
        }
    if (hours > 20)
        { 
            packA = ((hours - 20) * 0.85) + (10 * 0.95) + flatA;   //the ten is ten hours
        }
        
        
            if (hours <= 20)                                    //Package B Calculations
                {
                    packB = flatB;                      
                }
            if (hours > 20 && hours <= 30)
                {
                    packB= ((hours-20) * 0.74) + flatB;   
                }
            if (hours > 30)
                { 
                   packB = ((hours - 30) * 0.64) + (10 * 0.74) + flatB;   //the ten is ten hours
                 }
            
                        packC = flatC;                          //Package C Calculations
   
   
    //Output the Charge + Output the cheapest package and the savings
    
     if (package == 'a' || package == 'A')                      //User types A,  then outputs package chosen value
   {   
       cout << "$" << fixed << setprecision(2) << packA;
       
       if (packA < packB && packA < packC)                      //Outputs better package out and package value calculated
       {       
           cout << " A $0.00" << endl;
       }
       if (packB < packA && packB < packC)
       {        
           cout << " B $" << fixed << setprecision(2) << packA - packB << endl;
       }
       if (packC < packA && packC < packB)
       {      
            cout << " C $" << fixed << setprecision(2) << packA - packC << endl;
       }
   }
     
   if (package == 'b'|| package == 'B')                         //User types B,  then outputs package chosen value
   {   
       cout << "$" << fixed << setprecision(2) << packB;
       
       if (packB < packA && packB < packC)                      //Outputs better package out and package value calculated
       {        
           cout << " B $0.00" << endl;
       }
       if (packA < packB && packA < packC)
       {        
          cout << " A $" << fixed << setprecision(2) << packB - packA << endl;
       }
       if (packC < packA && packC < packB)
       {       
            cout << " C $" << fixed << setprecision(2) << packB - packC << endl;
       }
   
   }
   
   
   if (package == 'c' || package == 'C')                    //User types C,  then outputs package chosen value
   { 
       cout << "$" << fixed << setprecision(2) << packC;
      
       if (packC < packA && packC < packB)                      //Outputs better package out and package value calculated
       {      
           cout << " C $0.00" << endl;
       }
       if (packA < packB && packA < packC)
       {      
          cout << " A $" << fixed << setprecision(2) << packB - packA << endl;
       }
       if (packB < packA && packB < packC)
       {       
            cout << " B $" << fixed << setprecision(2) << packC - packB << endl;
       }
   }    
}

void problem5()
{
     //Declare all Variables Here
    float payRate, grosPay;                 //payrate, gross pay, hours worked
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin >> payRate >> hrsWrkd;
    
    //Calculate Paycheck
    if (hrsWrkd > 40)                                                       //hours over 40 ovetime
    {
        grosPay = (payRate * 20) + ((hrsWrkd - 40) * (payRate*2)) + (20 * (payRate * 1.5));
        
    }
    
    else if (hrsWrkd > 20 && hrsWrkd < 40)                                  //hours over 20 but under 40 overtime
    {
        grosPay = (20 * payRate) + ((hrsWrkd - 20) * (payRate*1.5));
    }
    
    else if (hrsWrkd < 20)                                                  //hours under 20 pay
    {
        grosPay = hrsWrkd * payRate;
    }
    
    //Output the check
    cout << "$" << fixed << setprecision(2) << grosPay << endl;
}

void problem6()
{
    
}