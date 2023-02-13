/* 
 * File:   main.cpp
 * Author: Giselle Avila
 *
 * Created on February 3, 2023
 * Purpose: BlackJack Version 2 - Money/Betting System, Random Function, Players
 * Cards shown and added
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;



int main(int argc, char** argv) 
{
    srand(time(0));                                                                   //random 
 
    const int MIN_BET = 1;                                                            //Player can not bet before 1
    
    char choose;                                                                       //choosing between the options in the switch menu using char
    string move;                                                                       //receive and display user's name 
    
    float mony = 0;                                                                     //players money
    float bet = 0;                                                                      //players amount to bet
    
    int card1, card2, total;                                                            //card 1, card 2, total of the two cards
   
   
     
    
    cout << "Welcome to Giselle's Blackjack Game!" << endl << endl;                                      //Introduction 
    cout << "Chose number 1 or 2 below." << endl << "\t1. To play." << 
            endl << "\t2. To read the rules." << endl << "\t3. No longer want to play." << endl 
            << "Input here: ";
         
    cin >> choose;
    
     
         switch(choose)
         {
             case '2': 
             {
                 cout << endl << "BLACKJACK : BEAT THE DEALER" << endl << endl;                                      //display game rules
    
                cout <<  endl << "How to win!" << endl << "1. The main goal of blackjack is to beat "                //the two ways to win
                        "the dealer at a higher value without going over 21(AKA without going bust)."
                        << endl << "2. You can also win if the dealer busts and you don't." << endl;

                cout << endl << "Card Values:" << endl;                                                               //card values

                cout << "1. Deuces through nines are all counted at face value." << endl 
                        << "2. Tens, jacks, queens, and kings have a value of ten." << endl
                        << "3. Aces can either be a 1 or 11." << endl;

                cout <<  endl << "Rules:" << endl;                                                                      //rules before winning
                cout << "1. Each hand begins with giving everyone two cards." << endl <<
                        "2. All cards are dealt face up except for the dealers last card." <<endl <<
                        "3. Players act first with two options: Hitting(Tap), Standing(Wave)"
                        << endl << endl <<'\t' <<"Hitting: You want another card so you tap the table.\n\tPlayers can tap as many times as they "
                        "want until they stand(are happy with their hand) or when they go bust." << endl
                        << endl <<'\t' << "Standing: You wave to show that you are happy with you hand, therefore will not another card."
                        << endl;
                
                do{
                    cout << endl << endl << "When your ready to play input 1." << endl << "Input: ";                       //to exit rules to play
                    cin >> choose;
                
                } while(!(choose == '1'));                                                                                  //if its not 1 it will re ask to input
                
                if (choose == '1')                                                                                          //player chooses 1 it will then ask money and betting numbers
                {
                     cout << endl << "BEAT THE DEALER!" << endl;
                     cout << "How much are you depositing today?" << endl << "Input: $";
                     cin >> mony;
                do 
                {
                   
                    cout << "How much would you like to bet? Must be at least " << MIN_BET <<  " at most " << mony << "." << endl;              //betting can be at least 1 or at most their total money
                    cin >> bet;
                    
                    cout << endl;
                }
                    while(!(bet >= MIN_BET && bet <= mony));                                                            //resets until player puts in a valid number
                }
                
                
                break;
            }
             
             case '1':                                                                      //Player chooses 1 from menu
             {
                  cout << endl << "BEAT THE DEALER!" << endl;
                  
                  cout << "How much are you depositing today?" << endl << "Input: $";               //betting can be at least 1 or at most their total money
                  cin >> mony;
                do 
                {
                    
                    cout << "How much would you like to bet? Must be at least $" << MIN_BET <<  " and at most $" << mony << "." << endl; 
                    cin >> bet;
                    
                    cout << endl;
                }
                    while(!(bet >= MIN_BET && bet <= mony));
                    break;
            }
             
             case '3':                                                                  //player chooses 3 from menu to leave
             {
                 cout << endl << "Please come back again when you are ready to play :/";
                 break;
             }
        }
         
        if (choose == '1' || choose == '2')                                // if player chooses choice 1 or 2 then deal the cards
        {
         cout << "Dealer's hand: ";                                             //Dealer's two cards plus total
         card1 = rand() % 10 + 1;
         card2 = rand() % 10 + 1;
         total = card1 + card2;
         cout  << card1 << "  " << card2 << "  = " << total << endl; 
         
         card1 = rand() % 10 + 1;
         card2 = rand() % 10 + 1;
         total = card1 + card2;
         

         cout << "Your hand: " << card1 << "  " << card2 << "  =";               //Player's two cards plus total
         cout << " " << total << "." << endl;
         
         cout << "Do you want to hit(h) or stand(s)?";                          //Player option to stay or hit depending on their cards
         cin >> move;
         
       
         
        
             
    }
    
    
 
    
     
    
    return 0;
}
