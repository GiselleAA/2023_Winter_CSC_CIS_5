/* 
 * File:   main.cpp
 * Author: Giselle Avila
 *
 * Created on February 3, 2023
 * Purpose: BlackJack Version 1 - Introduction to the Rules
 * 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int choose;                                                                                     //choose between the options on the menu
    float bet;                                                                                      //player's bet amount
    
    cout << "Welcome to Giselle's Blackjack Game!" << endl << endl;                                 //Introduction menu 
    cout << "Chose number 1 or 2 below." << endl << "\t1. To Play." << 
            endl << "\t2. To Read the rules." <<endl << "Input here: ";
    cin >> choose;
    
    
    if (choose == 2)
       
    {
     
    cout << endl << "BLACKJACK : BEAT THE DEALER" << endl << endl;
    
    cout <<  endl << "How to win!" << endl << "1. The main goal of blackjack is to beat "                       //the two ways to win
            "the dealer at a higher value without going over 21(AKA without going bust)."
            << endl << "2. You can also win if the dealer busts and you don't." << endl;
    
    cout << endl << "Card Values:" << endl;
    
    cout << "1. Deuces through nines are all counted at face value." << endl                                    //Card values
            << "2. Tens, jacks, queens, and kings have a value of ten." << endl
            << "3. Aces can either be a 1 or 11." << endl;
    
    cout <<  endl << "Rules:" << endl;                                                                          //Rules before winning 
    cout << "1. Each hand begins with giving everyone two cards." << endl <<
            "2. All cards are dealt face up except for the dealers last card." <<endl <<
            "3. Players act first with four options: Hitting(Tap), Standing(Wave), Doubling Down(D) or Splitting a Pair(SP)"
            << endl << endl <<'\t' <<"Hitting: You want another card so you tap the table.\n\tPlayers can tap as many times as they "
            "want until they stand(are happy with their hand) or when they go bust." << endl
            << endl <<'\t' << "Standing: You wave to show that you are happy with you hand, therefore will not another card."
            << endl << "\tDoubling Down: ";
    }
    
    else if(choose == 1)
    {
        
        
    }
    
    return 0;
}