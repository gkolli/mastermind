//
// Created by Naren Kolli on 2020-05-18.
//

using namespace std;
#include "code.h"

class response {

private:
    int responseMatch;
    int noResponseMatch;

public:
    response(); //constructor

    void setCorrectStoredValue(code codeObject); //set the correct stored value
    int getCorrectStoredValue(); //get the correct stored value

    void setIncorrectStoredValue(code codeObject); //set the incorrect stored value
    int getIncorrectStoredValue(); //get the incorrect stored value

    void printPlayerResponse();

};


