//
//  main.cpp
//  Hangman
//
//  Created by Elliot Wanless on 05/11/2018.
//  Copyright © 2018 Elliot Wanless. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "CGameplay.h"
#include "CWord.h"

using namespace std;

string word, coveredword;
int gameoption;
char letter;
bool outcome = false;
int level = 0;

bool endGame(Words &Words, string &word)
{
    if (level == 10)
    {
        // if the player ends up dead
        outcome = true;
        cout << "\nYou have lost! The word was " << word << endl;
        cout << "\n\nTHANK YOU FOR PLAYING HANGMAN!!!\n\n\n";
    }
    
    if (Words.underscoreCount(coveredword) == 0)
    {
        // counts the number of underscores left to find
        outcome = true;
        cout << "\nYou have won!" << endl;
        cout << "\n\nTHANK YOU FOR PLAYING HANGMAN!!!\n\n\n";
    }
    
    return outcome;
}


int main(int argc, const char * argv[]) {

    Gameplay Game;
    Words Words;
    
    // get PvP or PvC
    gameoption = Game.gametype(gameoption);
    
    // get word from the player or computer
    if (gameoption == 1) {  word = Words.getPlayerWord(word);   }
    if (gameoption == 2) {  word = Words.getCPUWord(word);  }
    
    // cover their word up with underscores
    coveredword = Words.coverWord(coveredword, word);
    
    // print the covered up word for player 2
    cout << "\nWord: " << coveredword << endl;

    //while the game is still going...
    while (outcome == false)
    {
        //print the crazy hangman dude
        Game.printHangman(level);
        
        // guess a letter in the word
        letter = Game.guessLetter(letter);
        
        //check if the letter in the word
        coveredword = Words.checkLetter(letter, word, coveredword);
        
        // print the guessed word
        cout << "\nWord: " << coveredword << endl;
        
        //Check if wrong or winner
        level = Words.checkWrong(level, letter, word);
        outcome = endGame(Words, word);
    }
    
    return 0;
}
