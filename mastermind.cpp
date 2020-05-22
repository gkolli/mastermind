//
// Created by Naren Kolli on 2020-05-18.
//

using namespace std;
#include "mastermind.h"

mastermind::mastermind() { //constructor of mastermind

}

void mastermind::printSecretCode() {

vector<int> currentCode = codeObject.getCodeMakerCode();
cout << "Code Maker's Code: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << currentCode[i] << ",";
    }
cout << endl;
}

vector<int> mastermind::humanGuess() { //creates then returns the player's guess
    vector<int> currentPlayerGuess;
    codeObject.createPlayerCode();
    currentPlayerGuess = codeObject.getPlayerCode();
    return currentPlayerGuess;
}

// Initialize and returns a response that has a correct & incorrect response
response mastermind::getResponse() { //creates then returns a response when passed the two codes (guess and secret code)

    response playerResponse;
    playerResponse.setCorrectStoredValue(codeObject);
    playerResponse.setIncorrectStoredValue(codeObject);
    return playerResponse;

}

bool mastermind::isSolved(response playerResponse) { //check (so boolean used) if response indicates that the board has been solved

    int playerCodeMatch = playerResponse.getCorrectStoredValue();

    if (playerCodeMatch == 4) { //all four numbers in the player's response are correct

        return true;
    }

    else
        return false;
}

void mastermind::playGame() {

    response humanResponse;
    codeObject.createCodeMakerCode();
    printSecretCode();
    int numberOfGuesses = 0;
    while (numberOfGuesses < 10 || isSolved(humanResponse) == false) {
        codeObject.createPlayerCode();
        humanResponse = getResponse();
        isSolved(humanResponse);
        humanResponse.printPlayerResponse();
        numberOfGuesses++;
        if (isSolved(humanResponse) == true) {
            cout << "You Win! Code Breaker is Correct" << endl;
        }
        if (numberOfGuesses == 10) {
            cout << "You Lose! Code Maker is Correct" << endl;

        }
    }
}