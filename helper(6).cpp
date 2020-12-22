// Author Michael Tullis builds the three functions for homework assigmnet 1
#include "helper.h"

bool is_char_in_the_set(char c, const char* set) { //check to see if the character appears anywhere in the set
    bool answer = false;
    if (c == '\0') {
        answer = true;
        return answer;
    }
    else {
        for (int i = 0; *(set + i) != '\0'; i++)
        {
            if (c == set[i])
            {
                answer = true;
                return answer;
            }
            else
                answer = false;
        }
    }
    return answer;
}

char* find_first_not_in_the_set(char* str, const char* set) {
    /*
    1. loop through each character in str one by one.
    2. if the current character in str, does not appear in set return the address
    of the current character
    3. return NULL after the loop
    */

    for (int i = 0; *(str + i) != '\0'; i++) //loop through str
    {
        bool inthere = false; //set to false for every new char of str
        for (int j = 0; *(set + j) != '\0'; j++) //loop through set
        {
            if (str[i] == set[j]) { //if they are equal then our character is in there
                inthere = true;
            }
        }
        if (inthere == false) //if it wasn't there then return that value
            return &str[i];
    }
    return NULL;
}

char* find_first_in_the_set(char* str, const char* set) {
    /* 1. loop through each character in str one by one.
     2. if the current character in str, appears in set return the address of the
     current character
     3. return NULL after the loop */
    for (int i = 0; *(str + i) != '\0'; i++) // loop through str
    {
        for (int j = 0; *(set + j) != '\0'; j++) // loop through set
        {
            if (str[i] == set[j]) { // if the are equal return our value
                return &str[i];
            }
        }
    }
    return NULL; // else return NULL
}


