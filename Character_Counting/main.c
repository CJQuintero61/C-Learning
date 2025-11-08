/*
    main.c

    This program counts the number of characters in a file.
    Keep in mind, spaces, \n, and \0 are all considered a character
    apart of the count too.

    This is done over a sample text file. 

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

int main(int argc, char *argv[]) {

    FILE *file_pointer = NULL;
    file_pointer = fopen("text.txt", "r");      // open 'text.txt' in read mode

    if (file_pointer == NULL) {
        printf("Failed to open file!\n");
        return 1;
    }

    int char_count = 0;

    while(fgetc(file_pointer) != EOF) {
        ++char_count;
    }

    printf("There are %d characters in the file.\n", char_count);
    return 0;
}