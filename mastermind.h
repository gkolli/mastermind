//
// Created by Naren Kolli on 2020-05-18.
//

using namespace std;
#include "response.h"

class mastermind {

public:

    code codeObject;
    mastermind();
    void printSecretCode();

    vector<int> humanGuess();

    response getResponse();

    bool isSolved(response humanResponse);

    void playGame();

};