#include <iostream>
#include "CWord.h"

using namespace std;

string Words::getPlayerWord(string &word)
{
    // input player word and store it as a string named 'word'
    cout << "\nPlayer 1, please enter ONE word in LOWER CASE" << endl;
    cout << "Your word: ";
    cin >> word;
    cout << "\n";
    
    return word;
}

string Words::getCPUWord(string &word)
{
    // seed for a more random rand() function
    srand( static_cast<unsigned int>(time(NULL)));
    int random = rand() % 13;
    cout << "\nPlease choose a theme: 1) MARVEL     2) Harry Potter" << endl;
    cout << "Your option: ";
    cin >> theme;
    
    //ensure the variable is the correct format
    while ((theme != 1) && (theme != 2))
    {
        cout << "Please enter a valid option: ";
        cin >> theme;
    }
    
    // select the correct theme based on user preference
    if (theme == 1) {   word = MCUcharacters[random];   }
    if (theme == 2) {   word = HPcharacters[random];    }
    
    return word;
}

string Words::coverWord(string &coveredword, string &word)
{
    for (int i = 0; i < word.length(); i++)
    {
        // turn word into underscores and store it in coverword
        coveredword = coveredword + "_";
    }
    return coveredword;
}



string Words::checkLetter(char &letter, string &word, string &coveredword)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            // check if the letter corresponds/ If it does,
            coveredword[i] = letter;
        }
        else
        {
            // do nothing, it's covered in another function
        }
    }
    return coveredword;
}

int Words::checkWrong(int &level, char &letter, string &word)
{
    count = 0; // reset the count from previous checks.
    
    for (int i = 0; i < word.length(); i++)
    {
        // increase the count if letter doesn't match
        if (word[i] != letter)  {   count = count + 1;  }
    }

    // if the count is the same as the word length, none of the letters matched
    if (count == word.length()) {   level = level + 1;  }
    
    return level;
}

int Words::underscoreCount(string &coveredword)
{
    // reset the count
    temp = 0;
    
    for (int i = 0; i < coveredword.length(); i++)
    {
        if (coveredword[i] == '_')
        {
            // if there's an underscore, increase the count
            temp = 1;
        }
    }
    
    return temp;
}
