#include <stdio.h>

int getInputInRange(int min, int max);

int factorial(int num);

double choose (int n, int r);


int main()
{

    int row;
    int num;

    printf("Enter a row number between 1 and 12: \n");
    scanf("%d", &row);

    while (row < 1 || row > 12){

        printf("Error. Enter a valid input: \n");
        scanf("%d", &row);

    }

    for (int i = 0; i < row; i++){

        for (int z = 0; z <= i; z++){

            num = choose (i, z);

            printf("%d ", num);

        }

        printf("\n");

    }

}



double choose (int n, int r){

    double finalChoose;
    int nFac;
    int rFac;
    int difference = n - r;
    int diffFac;


    diffFac = factorial(difference);
    nFac = factorial(n);
    rFac = factorial(r);

    finalChoose = nFac / (rFac * diffFac);

    return finalChoose;


}



int factorial (int num){

    int fac = 1;

    if (num == 0){

        fac = 1;

        return fac;

    } else {

        for (int i = 0; i < num; i++){

        fac *= (num-i);

        }

        return fac;

    }



}

int getInputInRange(int min, int max){

    int val;

    printf("Enter a value: \n");
    scanf("%d", &val);

    while (1){

        if (val < min || val > max){

            printf("Error: invalid value. Enter another value: \n");
            scanf("%d", &val);

        } else {

            return val;

        }


    }

}
