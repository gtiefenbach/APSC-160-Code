#include <stdio.h>
#include <math.h>

double mean (double data[], int size);

double var (double data[], int size);

double sdev (double var);

double minimum (double data[], int size);

int main()
{

}



double mean (double data[], int size){


    double sum = 0;

    for (int i = 0; i < size; i++){

        sum += data[i];

    }

    return sum / size;




}


double var (double data[], int size){

    double val = 0;

    for (int i = 0; i < size; i++){

        val += (double) pow (( data[i] - mean(data, size)), 2);

    }

    return val / size;


}

double sdev (double var){

    return (double) sqrt(var);

}


double minimum (double data[], int size){

    double min = data[0];

    for (int i = 0; i < size; i++){

        if (data[i] < min){

            min = data[i];

        }

    }

    return min;

}


