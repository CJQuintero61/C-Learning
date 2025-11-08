/*
    main.c

    This program uses symbolic constants to make an array
    and print values 1-10

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

// symbolic constants
// no semicolon, and they are different from variables
#define ARRAY_SIZE 10

int main(int argc, int argv[]) {

    int numbers[ARRAY_SIZE];

    // init array
    for(int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = i + 1;
    }

    // print array
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

