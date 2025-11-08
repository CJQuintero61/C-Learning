/*
    main.c

    This program reads a text string
    and prints a single space in large space gaps

    Ex "Hello      World" -> "Hello World"

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

#define SIZE 100

int main() {
    char str[SIZE];
    int ch;
    int i = 0, j = 0;

    printf("Enter an input string:\n");
    while(i < (SIZE - 1) && (ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }

    // null terminate the string
    str[i] = '\0';


    while(str[j]) {

        // when a space is found...
        if(str[j] == ' ') {

            // print it then move to the next character
            printf("%c", str[j]);
            j++;
            
            // if the next character is also a space,
            // skip over until a non-space is found
            while(str[j] == ' ') {
                j++;
            }

        }
        else {
            // if the character is not a space,
            // print it and continue
            printf("%c", str[j]);
            j++;
        }
    }

    return 0;
}
