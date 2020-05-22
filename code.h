//
// Created by Naren Kolli on 2020-05-18.
//

using namespace std;
#include <iostream>

#include <vector>
#include <cstdlib>
#include <ctime>

class code //class header

{

private:

    vector<int> indexVector; //checking to see if response index is correct
    vector<int> codeMakerCode;
    vector<int> playerCode;

public:

    code();

    int checkCorrect();
    int checkIncorrect();

    void createCodeMakerCode(); //initializes the code maker's code
    vector<int> getCodeMakerCode(); //retrieves the code maker's code. This is a vector of integers

    void createPlayerCode(); //initializes the player's code
    vector<int> getPlayerCode(); //retrieves the player's code. This is a vector of integers
};