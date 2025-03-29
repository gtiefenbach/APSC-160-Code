/*
    Author: Griffin Tiefenbach
    Date: 2024 - 10 - 01
    Student Number: 93629772
    Email: gtiefenb@student.ubc.ca
    Purpose: This code prompts the user for the number of kilowatt hours of electricity used, and outputs the cost
*/


#include <stdio.h>

int main(void)
{

    double hours;
    double usageFee;
    double cost;
    double count = 0;

    printf("How many kilowatt hours of electricity were used this month? \n");
    scanf("%lf", &hours);

    if (hours >= 0){

        if (hours <= 500){

            usageFee = hours * 0.063 + 12.96;

        } else{

            while (count <= 500){

                usageFee += 0.063;

                count++;

            }

            hours = hours - count;

            while (hours > 500){

                usageFee = usageFee + hours * 0.029;

            }


        }

        cost = usageFee + 1.14;

        printf("Total cost of electricity is $%.2lf\n", cost);


    } else{

        printf("Error: invalid input.\n");

    }

    return 0;

}
