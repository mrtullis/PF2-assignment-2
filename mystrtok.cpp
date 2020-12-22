/******************************************************************************
Writen By Michael Tullis
building our mystrtok function, it is strtok but mine
*******************************************************************************/
#include "mystrtok.h" //including our header file which has the helper files
char* mystrtok(char* str, const char* delim)
{
    static char* loc;
    char* token;
    if (loc == NULL) //if this is the first time give it the whole string
    {
        loc = str;
    }
    if (loc == NULL) // if at this point the loc is still empty that means the string is empty and we need to end
    {
        return NULL;
    }
    token = find_first_not_in_the_set(loc, delim); // get our string until the first delim
    loc = find_first_in_the_set(token, delim); // this gets rid of the token so we don't pick it up next time
    if (loc != nullptr) { // just to double check that our loc isn't empy
        *loc = '\0'; //refreshes the loc
        loc++; //increments our loc
    }
    return token; // returns our token if we made it this far

}