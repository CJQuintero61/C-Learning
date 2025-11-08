/*
    main.c

    This program uses fgetc() and fopen()
    to open a file and read a single character

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

    // define a file pointer (file operations are in the stdio.h library)
    FILE *file_pointer = NULL;

    // holds the current character read
    // this is an int and not a char becuase the variable used here
    // must be big enough to hold any character, as well as, the EOF value 
    // (which is an int). EOF, fgetc() and getchar() return an int as well
    // so when reading such data, use an integer
    int current_char;

    // open 'sample_text_file.txt' in read mode ('r')
    file_pointer = fopen("sample_text_file.txt", "r");

    if (file_pointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // use fgetc(file_ptr) to get a character from the file,
    // then check if the character is the end of file character.
    // keep printing until EOF character is found
    while ( (current_char = fgetc(file_pointer)) != EOF ) {
        printf("%c", current_char);
    }

    // close the file
    fclose(file_pointer);

    return 0;
}