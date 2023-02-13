/* 
 * File:   main.cpp
 * Author: Giselle Avila
 *
 * Created on February 3, 2023
 * Purpose: BlackJack Version 3 - Winner or Loser
 * Cards shown and added
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;



int main(int argc, char** argv) 
{
    srand(time(0));                                                                   //random 
 
    const int MIN_BET = 1;                                                            //Player can not bet before 1
    
    char choose;                                                                      //choosing between the options in the switch menu using char
    char move;
    char agree;                                                                       //Player's agreement hit or not 
    string name;                                                                      //receive and display user's name 
    
    float mony = 0;                                                                   //Players money
    float bet = 0;                                                                    //bet made 
    
    int dealC, dealH, carP1, carP2, totP, totD, newCard;                                    //Dealer's cards, Player's cards, Totals in both
   
   
     
    
    cout << "Welcome to Giselle's Blackjack Game!" << endl << endl;                                     //Introduction menu 
    cout << "Chose number 1 , 2, or 3 below." << endl << "\t1. To play." << 
            endl << "\t2. To read the rules." << endl << "\t3. No longer want to play." << endl; 
       
         
   
    
    do
    {
         cout << "Input here: ";
         cin >> choose;
         switch(choose) 
         {
             case '2': 
             {
                 cout << endl << "BLACKJACK : BEAT THE DEALER" << endl << endl;                                     //display game rules
    
    
                cout <<  endl << "How to win!" << endl << "1. The main goal of blackjack is to beat "                //the two ways to win
                        "the dealer at a higher value without going over 21(AKA without going bust)."
                        << endl << "2. You can also win if the dealer busts and you don't." << endl;

                cout << endl << "Card Values:" << endl;                                                         //card values

                cout << "1. Deuces through nines are all counted at face value." << endl 
                        << "2. Tens, jacks, queens, and kings have a value of ten." << endl
                        << "3. Aces can either be a 1 or 11." << endl;

                cout <<  endl << "Rules:" << endl;                                                                          //rules before winning
                cout << "1. Each hand begins with giving everyone two cards." << endl <<
                        "2. All cards are dealt face up except for the dealers last card." <<endl <<
                        "3. Players act first with two options: Hitting(Tap), Standing(Wave)"
                        << endl << endl <<'\t' <<"Hitting: You want another card so you tap the table.\n\tPlayers can tap as many times as they "
                        "want until they stand(are happy with their hand) or when they go bust." << endl
                        << endl <<'\t' << "Standing: You wave to show that you are happy with you hand, therefore will not another card."
                        << endl;
                
                do{
                cout << endl << endl << "When your ready to play input 1." << endl << "Input: ";                            //to exit rules to play
                cin >> choose;
                } while(!(choose == '1'));                                                                                  //if its not 1 it will re ask to input
                
                if (choose == '1')                                                                                          //player chooses 1 it will then ask money and betting numbers
                {
                     cout << endl << "BEAT THE DEALER!" << endl << endl;
                     cout<< "Insert player name here: ";
                     cin >> name;
                     cout << "How much are you withdrawing today?" << endl << "Input: $";
                     cin >> mony;
                do 
                {
                   
                    cout << "How much would you like to bet? Must be at least " << MIN_BET <<  " at most " << mony << "." << endl;        //betting can be at least 1 or at most their total money
                    cout << "Input: $";
                    cin >> bet;
                    
                    cout << endl;
                }
                    while(!(bet >= MIN_BET && bet <= mony));
                }
                
                
                break;
            }
             
             case '1':
             {
                  cout << endl << "BEAT THE DEALER!" << endl << endl;                //Player chooses 1 from menu
                  cout<< "Insert player name here: ";
                  cin >> name;
                  cout << "How much are you withdrawing today?" << endl << "Input: $";          
                  cin >> mony;
                do 
                {
                    
                    cout << "How much would you like to bet? Must be at least $" << MIN_BET <<  " and at most $" << mony << "." << endl;  //betting can be at least 1 or at most their total money
                    cout << "Input: $";
                    cin >> bet;
                    
                    cout << endl;
                }
                    while(!(bet >= MIN_BET && bet <= mony));
                    break;
            }
             
             case '3':
             {
                 cout << endl << "Please come back again when you are ready to play :/";
                 break;
             }
        }
    }while(!(choose == '3' || choose == '2' || choose == '1'));                                    
         
    
        if (choose == '1' || choose == '2')                                         //game begins 
        {
         cout << "Dealer's hand: ";                                                 //dealer's cards
         dealC = rand() % 10 + 1;
         dealH = rand() % 10 + 1;
         totD = dealC + dealH;
         cout  << dealC << endl; 
         
         carP1 = rand() % 10 + 1;
         carP2 = rand() % 10 + 1;
         totP = carP1 + carP2;
         

         cout << name << "'s hand: " << carP1 << "  " << carP2 << "  =";              //players cards
         cout << " " << totP << "." << endl;
         
         cout << "Do you want to hit(h) or stand(s)?";                                //players choice to hit or not for a new card
         cin >> move;
         
         cout << endl;
         
         if (move == 'h' || move == 'H')                                            //if player chooses hit 
         {
             cout << "Dealer's hand: " << dealC << "  " << dealH << "  = " << totD;
             cout << endl;
             
             do                                                                     //give choice of hitting again until player says no and or players total is greater than 21 or equal to 21
             {
                
                 newCard = rand() % 10 + 1;
                 totP = totP + newCard;
                
                 cout << endl << name << "'s new card is: "<< newCard << endl <<"Total is now = " << totP << endl;
                 
                 
                 if(totP > 21)
                 {
                     cout << "Sorry, you busted! You went over 21, you lose!";                  //player goes over 21, loses and exits game
                     
                     mony = mony - bet;
                     cout << endl << endl << "Your new total: $" << mony;
                     
                     exit(0);
                 }
                 
                 if(totP == 21)
                 {
                     cout << endl << "Congrats!" << endl <<  name << " wins!";                      //player get 21 then they win!!
                     mony = mony + bet;
                     cout << endl << endl << name << "'s new total: " << mony ;
                     
                     exit(0);
                 }
                 
                 cout << endl << "Do you want to hit y or n?";                      //based on response will reloop but if n then onto next section of code
                 cin >> agree;
                 
                     
                 
             } while (!(agree == 'n' || agree == 'N'));
             
             
            
             cout << endl  << "Dealer's hand: " << dealC << "  " << dealH << "  = " << totD;            //player finally chose n
             cout << endl << name << "'s total: " << totP << endl;
             
              do                                                                                        //dealers turn to get cards, but if its right under 17 then it will stop
              {
                 newCard = rand() % 10 + 1;
                 totD = totD + newCard;
                 
                
                 cout  << endl <<"Dealer's new card is: " << newCard << endl <<"Total is now = " << totD << endl;
             
                 cout << name << "'s total: " << totP << endl;
                 
             } while(totD < 17 && totP < 21 );
             
             if (totD == 21 && !(totP == 21))                                                   //determining winners
             {
                 cout << endl << name <<" lost!" << endl << "Dealer wins!";                 // dealer wins if player does not have 21
                 mony = mony - bet;                                                         //calculates playere new sum of money amount 
                 cout << endl << endl << name << "'s new total: "<< mony;
             }
             
             if(totD > 21)                                                                  //dealers amount over 21 = busted  - player wins!
             {
                 cout << endl << "Dealer busted!";
                 cout << endl << "Congrats!" << endl <<  name << " wins!";
                 mony = mony + bet;
                 cout << endl << endl << name << "'s new total: " << mony ;
             }
            
             else if (totP < totD)                                                         //dealer total is great then players, player loses!
             {
                 cout << endl << name <<" lost!" << endl << "Dealer wins!";
                 mony = mony - bet;
                 cout << endl << endl << name << "'s new total: "<< mony;
                 
             } 
             else if ( totP > totD)                                                         //player total is great then dealers, player wins!
             {
                  cout << endl << "Congrats!" << endl <<  name << " wins!";
                 mony = mony + bet;
                 cout << endl << endl << name << "'s new total: " << mony ;
             }
             else if (totP == totD)                                                         //if values the same then its a tie
             {
                 cout << endl << "A Tie!" << endl << "No Winner :(";
                 
             }
          
         }
         
         if (move == 's' || move == 'S')                                                    //player chooses to stay
         {
             cout << "Dealer's hand: " << dealC << "  " << dealH << "  = " << totD;
             cout << endl;
             
             cout << name << "'s hand: " << carP1 << "  " << carP2 << "  = " << totP << endl;
           
             do
              {
                 newCard = rand() % 10 + 1;                                                 //Dealers turn to hit but only if under 17 then its stops
                 totD = totD + newCard;
                 
                
                 cout  << endl <<"Dealer's new card is: " << newCard << endl <<"Total is now = " << totD << endl;
             
                 cout << name << "'s total: " << totP << endl;
                 
             } while(totD < 17 && totP < 21 );
             
             
             if (totD == 21 && !(totP == 21))                                                   //determining winners
             {
                 cout << endl << name <<" lost!" << endl << "Dealer wins!";                 // dealer wins if player does not have 21
                 mony = mony - bet;                                                         //calculates playere new sum of money amount 
                 cout << endl << endl << name << "'s new total: "<< mony;
             }
             
            if(totD > 21)                                                                  //dealers amount over 21 = busted  - player wins!
             {
                 cout << endl << "Dealer busted!";
                 cout << endl << "Congrats!" << endl <<  name << " wins!";
                 mony = mony + bet;
                 cout << endl << endl << name << "'s new total: " << mony ;
             }
            
            
              else if (totP < totD)                                                         //dealer total is great then players, player loses!
             {
                 cout << endl << name <<" lost!" << endl << "Dealer wins!";
                 mony = mony - bet;
                 cout << endl << endl << name << "'s new total: "<< mony;
                 
             } 
             
              else if ( totP > totD)                                                         //player total is great then dealers, player wins!
             {
                  cout << endl << "Congrats!" << endl <<  name << " wins!";
                 mony = mony + bet;
                 cout << endl << endl << name << "'s new total: " << mony ;
             }
             
              else if (totP == totD)                                                         //if values the same then its a tie
             {
                 cout << endl << "A Tie!" << endl << "No Winner :(";
                 
             }
          
             
             
         }
         
        
             
    }
    
    
 
    
     
    
    return 0;
}
