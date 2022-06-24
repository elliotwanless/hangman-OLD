//  CWord.h
//  HANGMAN
//
//
//  Copyright © 2018 Elliot Wanless. All rights reserved.
//

#pragma once

using namespace std;

class Words
{
protected:
    int count = 0; // increases whenever a letter doesn't match the word[i]. If count = word.length, it is a wrong letter
    int temp = 0; // used to count the number of underscores in the coveredword
    int random, theme; // used to determine the CPU theme and random string
    
    string MCUcharacters[13] = {"ironman", "hulk", "thor", "tesseract", "wakanda", "jarvis", "vibranium", "gamora", "starlord", "spiderman", "quantum", "avengers", "asgard"};
    string HPcharacters[13] = {"olivanders", "gringotts", "dobby", "lestrange", "hermione", "basilisk", "quidditch", "firebolt", "azkaban", "cauldron", "malfoy", "weasley", "hedwig"};
    
public:
    string getPlayerWord(string &word);
    string getCPUWord(string &word);
    string checkLetter(char &letter, string &word, string &coveredword);
    string coverWord(string &coveredword, string &word);
    int checkWrong(int &level, char &letter, string &word);
    int underscoreCount(string &coveredword);
};
