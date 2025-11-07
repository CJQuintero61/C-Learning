/*
    main.c

    This program uses a loop to list fahrenheit increments 20 from 0-300 
    and the coresponding celsius temperature.

    Created by CJQ on 11/07/2025
    Last updated by CJQ on 11/07/2025

    Linux:
    1. cc main.c
    2. ./a.out
    
    Windows:
    1.  cc main.c
    2. .\a.exe
*/
#include <stdio.h>

// prototypes
int convert_to_celsius(int fahrenheit);
void print_temperatures(int fahrenheit, int upper_bound);

int main(int argc, char *argv[]) {
    // declare and init vars
    int fahrenheit = 0; 
    int upper_bound = 300;

    // print the temperatures
    print_temperatures(fahrenheit, upper_bound);

    return 0;
} // end main

int convert_to_celsius(int fahrenheit) {
    /*
        convert_to_celsius:
        This function takes a fahrenheit temperature and converts it to celsius

        params:
            fahrenheit - int: the fahrenheit value to convert

        returns:
            celsius - int: the computed celsius value
    */
    int celsius = 5 * (fahrenheit - 32) / 9;

    return celsius;
} // end convert_to_celsius

void print_temperatures(int fahrenheit, int upper_bound) {
    /*
        print_temperatures:
        This function prints a table of temperature values for fahrenheit 
        and its coresponding celsius temperature

        params:
            fahrenheit - int: the fahrenheit temperature 
            upper_bound - int: what temperature to stop at
    */
    int celsius = 0;
    int step_size = 20;

    while(fahrenheit <= upper_bound) {
        // do the conversion
        celsius = convert_to_celsius(fahrenheit);
        
        printf("%d \t %d\n", fahrenheit, celsius);

        // increment by step size
        fahrenheit = fahrenheit + step_size;
    }
} // end print_temperatures