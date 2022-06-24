//  CGameplay.h
//  HANGMAN
//
//
//  Copyright © 2018 Elliot Wanless. All rights reserved.
//

#pragma once

#include <vector>

using namespace std;

class Gameplay
{
protected:
    vector<char> letters; //vector for the previously guessed letters
    
public:
    int gametype(int &gameoption);
    void printHangman(int &level);
    char guessLetter(char &letter);
};
