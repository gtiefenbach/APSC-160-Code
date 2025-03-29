/*
    Author: Griffin Tiefenbach
    Student Number: 93629772
    Lab Section: L1Y
    Email: gtiefenb@student.ubc.ca
*/

#include <stdio.h>

#define NEWTONS_TO_POUNDS 1.0/4.448

int main (void){

    double newtons;
    double pounds;

    printf("What is the force in Newtons? \n");
    scanf("%lf", &newtons);

    pounds = newtons * NEWTONS_TO_POUNDS;

    printf("The same force in pounds is %.3lf", pounds);

    return 0;

}
