/*
    main.c

    This program reads a text string
    and prints it

    Created by CJQ on 11/08/2025
    Last updated by CJQ on 11/08/2025

    Linux:
    1. cc main.c
    2. ./a.out
    
    Windows:
    1.  cc main.c
    2. .\a.exe
*/
#include <stdio.h>

#define ARRAY_SIZE 100

int main (int argc, char *argv[]) {

    char input_string[ARRAY_SIZE];      // array of characters to hold the input
    int input_character;                // int because getchar() returns an int
    int i = 0, j = 0;                   // iterators

    printf("Enter an input string:\n");

    // read the characters
    // in the case of reaching the input limit, we need to stop at
    // 2 before the limit so that we can use the last index as the null
    // terminator
    while( (input_character = getchar()) != '\n' && i < (ARRAY_SIZE - 1)) {
        input_string[i] = input_character;
        i++;
    }

    // place the null terminator
    input_string[i] = '\0';

    printf("You entered\n");
    while(input_string[j])
    {
        printf("%c", input_string[j]);
        j++;
    }


    
    return 0;
}