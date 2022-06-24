----------------------------------------------------------------

// Elliot Wanless
//
// HANGMAN

----------------------------------------------------------------
05/11/18 – 8:00pm

The aim is to create a game of hangman before midnight. 4-hour challenge. Let’s do this.

----------------------------------------------------------------
06/11/18 – 12:04pm

Well, I had the game finished by 11:50, but I was playing about with it and making sure all possible outcomes worked.

1) I created a few functions that allowed for a string input, which is then covered up with ‘_’. So, the word ‘bananas’ would be shown as ‘_______’.
2) The next step was to allow for user input and compare it against the UN-COVERED string of characters. This would indicate a match.
3) The match should then be shown and replace the ‘_’. If there wasn’t a match, the hangman guy was shown.
4) I used a switch statement and spent a good few minutes building the hangman-man out of text. I think he looks cool, it’s just a shame I couldn’t give him a hat/gloves.
5) I changed each switch so that a component would be added each time. I gave the switch an argument called ‘level’ which indicated how far the player was from being hung (10 was DEAD).
6) I then worked the logic for if the player wins/loses. I introduced some random variables which I wish I named something other than ‘temp’ and ‘random’. I ended up commenting next to their initialisation what they were…
7) I got the whole PvP working, so I moved onto PvC. I had designed it so that I only needed to change ONE thing to allow for a CPU input; the rest was completed using the exact same functions. I used Marvel and Harry Potter words as usable inputs and seeded using time for a more random rand() function.
8) YOU CAN ALSO INPUT MORE THAN ONE LETTER AT ONCE… and it manages to process the letters individually, which is great.

It works well, it was fun, and it only took 4 hours. It was a nice way to spend my night!

