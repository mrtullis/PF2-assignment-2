//Author Michael Tullis the helper.h file for homework assignmnet 1
#ifndef Helper
#define Helper
#include <cstdlib>
bool is_char_in_the_set(char c, const char* set);
char* find_first_not_in_the_set(char* str, const char* set);
char* find_first_in_the_set(char* str, const char* set);
#endif