/******************************************************************************
Writen By Michael Tullis
tests our mystrtok function for project 2
*******************************************************************************/
#include <stdio.h>
#include <cstring>
#include <iostream>
#include "mystrtok.h"
#include "helper.h"
using namespace std;




int main() {
    char str[] = " The quick brown fox jumps over the lazy dog"; // string to tokenize 
    char delim[] = " "; //what we are using to break the tokens
    cout << "The tokens are:" << endl;
    char* token = mystrtok(str, delim); // first call to mystrtok
    while (token != NULL) // repeat through the mystrtok until we have tokenized the whole string 
    {
        cout << token << endl;
        token = mystrtok(NULL, delim);
    }
    return 0; //end
}