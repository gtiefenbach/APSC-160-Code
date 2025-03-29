/*
 * Author: Griffin Tiefenbach
 * Student Number: 93629772
 * Lab Section: L1Y
 * Date: 2024 - 09 - 18
 * Purpose: Prompts the user for his/her name and prints a
  welcome message on the screen
  */

#include <stdio.h>
#include <stdlib.h>

/* constants*/

#define MAX_NAME_LENGTH 100

int main(void){

    char name[ MAX_NAME_LENGTH];

    printf("Please enter your first name: " );
    scanf( "%s", name);
    printf ("\nHello, %s, welcome to APSC 160!\n\n", name);

    /*system( "PAUSE"); is optional */
    return 0;
}
