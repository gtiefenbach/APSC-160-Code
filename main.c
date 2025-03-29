#include <stdio.h>

int main (void){

    FILE *inFile;
    FILE *outFile;

    inFile = fopen ("students.txt", "r");
    outFile = fopen ("results.txt", "w");

    int grade1;
    int grade2;
    int grade3;
    char name[20];
    double average;


    if (inFile != NULL){

        while (fscanf == 1){
        fscanf(inFile, "%s %d %d %d", &name, &grade1, &grade2, &grade3);

        average = (grade1 + grade2 + grade3) / 3.0;

        fprintf(outFile, "%s $.2lf\n", name, average);

        }

    } else{

    printf("Error opening the input file\n");

    }

    fclose(inFile);
    fclose(outFile);

}
