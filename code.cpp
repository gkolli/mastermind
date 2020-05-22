//
// Created by Naren Kolli on 2020-05-18.
//

using namespace std;
#include "code.h"

code::code() { //code class declaration, to be filled with the


    }
void code::createCodeMakerCode() {//creates codemaker's code
    srand((unsigned) time(0)); //generating seed for random number generation
    codeMakerCode.clear(); //clearing the current (value of 0) codeMakerCode
    for (int codeCountVal = 0; codeCountVal < 4; codeCountVal++) { //four digits for code
    int codeVal = rand() % 6; //value from 0 to 5
    codeMakerCode.push_back(codeVal); //push_back adds element (int this case the random number) to the end of the vector
}

}

void code::createPlayerCode() {
    playerCode.clear();
    cout << "Welcome to Mastermind! Guess the digits of the 4 number code, hitting enter after each digit." << endl;
        for (int n = 0; n < 4; n++) {
            int playerInput;
            cin >> playerInput;
            playerCode.push_back(playerInput);
        }
}


    int code::checkCorrect() { //returns number of correct digits are in the correct location

        int counter = 0;
        int a = 1;
        int b = 0;

        for (int i = 0; i < 4; i++) {

            if (codeMakerCode[i] == playerCode[i]) {

                indexVector.push_back(a);
                counter++;
            } else {
                indexVector.push_back(b);
            }

        }

        return counter;
    }

    int code::checkIncorrect() { //returns number of correct digits, but in incorrect location

        checkCorrect(); //use previously defined checkCorrect() function to check first

        int wrongLocationCounter = 0;

        for (int i = 0; i < 4; i++) {
            for (int x = 0; x < 4; x++) {

                if (indexVector[i] == 1) {
                    break;
                }

                if (codeMakerCode[i] == playerCode[x] && i != x) {

                    wrongLocationCounter++;
                    break;
                }
            }
        }
        return wrongLocationCounter;
    }

vector<int> code::getPlayerCode() {
    return playerCode;
}


vector<int> code::getCodeMakerCode()  {
    return codeMakerCode;
}
