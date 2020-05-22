//
// Created by Naren Kolli on 2020-05-18.
//

#include "response.h"

response::response() {

}

void response::setCorrectStoredValue(code codeObject) {
    responseMatch = codeObject.checkCorrect();
}

int response::getCorrectStoredValue() {
    return responseMatch;
}

void response::setIncorrectStoredValue(code codeObject) {
    noResponseMatch = codeObject.checkIncorrect();
}

int response::getIncorrectStoredValue() {
    return noResponseMatch;
}

void response::printPlayerResponse() {
    cout << "(Matched Digit, Matched Digit yet Incorrect Location): " << "(" << responseMatch << "," << noResponseMatch << ")" << endl;
}