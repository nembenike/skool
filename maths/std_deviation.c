#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("How many numbers do you want to give?\n");
    size_t LENGTH;
    scanf("%zu", &LENGTH);
    int NUMBERS[LENGTH];

    double NUMSUM = 0;
    for (size_t i = 0; i < LENGTH; ++i){
        printf("Give %zu. number\n", i+1);
        scanf("%i", &NUMBERS[i]);
        NUMSUM += NUMBERS[i];
    }
    double AVERAGE = NUMSUM / LENGTH;
    printf("The average is: %lf\n", AVERAGE);

    double DEVIATION_SQUARED_SUM = 0;
    for (size_t i = 0; i < LENGTH; ++i){
        DEVIATION_SQUARED_SUM += pow(NUMBERS[i]-AVERAGE, 2);
    }
    double VARIANCE = DEVIATION_SQUARED_SUM / LENGTH;
    double STANDARD_DEVIATION = sqrt(VARIANCE);
    printf("The standard deviation is: %lf\n", STANDARD_DEVIATION);
}
