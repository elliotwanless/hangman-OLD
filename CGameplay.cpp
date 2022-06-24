#include <iostream>
#include "CGameplay.h"

using namespace std;

int Gameplay::gametype(int &gameoption)
{
    // WELCOME message for the player(s)
    cout << "--- Welcome to HANGMAN ---" << endl;
    cout << "\nPlease choose a mode: 1) PvP     2) PvC" << endl;
    cout << "Your option: ";
    cin >> gameoption;
    
    // repeat the input if it is invalid
    while ((gameoption != 1) && (gameoption != 2))
    {
        cout << "Please enter a valid option: ";
        cin >> gameoption;
    }
    
    return gameoption;
}

char Gameplay::guessLetter(char &letter)
{
    cout << "\nPlayer 2, guess a letter: ";
    cin >> letter;
    
    // check through ALL the letters that have already been guessed
    for (int i=0; i<letters.size(); i++)
    {
        while  (letters[i]==letter)
        {
            // set i = 0 so the cycle starts again and it checks all elements of the vector
            cout << "\nThis letter has already been picked, please choose another: ";
            cin >> letter;
            i = 0;
        }
    }
    
    // add the letter to the vector (it's correct as it has been filtered above
    letters.push_back(letter);
    
    return letter;
}


void Gameplay::printHangman(int &level)
{
    // switch using the level variable
    switch (level) {
        case 0:
            //level 0
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            break;
            
        case 1:
            //level 1
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << " ______" << endl;
            break;
            
        case 2:
            //level 2
            cout << endl;
            cout << "  |       " << endl;
            cout << "  |      " << endl;
            cout << "  |      " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 3:
            //level 3
            cout << "  ________" << endl;
            cout << "  |/      " << endl;
            cout << "  |      " << endl;
            cout << "  |      " << endl;
            cout << "  |       " << endl;
            cout << "  |      " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 4:
            //level 4
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      " << endl;
            cout << "  |      " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 5:
            //level 5
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      (_)" << endl;
            cout << "  |      " << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 6:
            //level 6
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      (_)" << endl;
            cout << "  |       |" << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 7:
            //level 7
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      (_)" << endl;
            cout << "  |      -|-" << endl;
            cout << "  |       " << endl;
            cout << "  |       " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 8:
            //level 8
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      (_)" << endl;
            cout << "  |      -|-" << endl;
            cout << "  |       |" << endl;
            cout << "  |       " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 9:
            //level 9
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      (_)" << endl;
            cout << "  |      -|-" << endl;
            cout << "  |       |" << endl;
            cout << "  |      ]  " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
            
        case 10:
            //level 10
            cout << "  ________" << endl;
            cout << "  |/      |" << endl;
            cout << "  |      (_)" << endl;
            cout << "  |      -|-" << endl;
            cout << "  |       |" << endl;
            cout << "  |      ] [ " << endl;
            cout << "  |" << endl;
            cout << " _|____" << endl;
            break;
    }
}

