#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("how many numbers do you want to give?\n");
    size_t LENGTH;
    scanf("%zu", &LENGTH);
    int NUMBERS[LENGTH];

    double NUMSUM = 0;
    for (size_t i = 0; i < LENGTH; ++i){
        printf("give %zu. number\n", i+1);
        scanf("%i", &NUMBERS[i]);
        NUMSUM += NUMBERS[i];
    }
    double AVERAGE = NUMSUM / LENGTH;
    printf("The average is: %lf\n", AVERAGE);

    double SOMESUM = 0;
    for (size_t i = 0; i < LENGTH; ++i){
        SOMESUM += pow(NUMBERS[i]-AVERAGE, 2);
    }
    double SOMETHING = SOMESUM / LENGTH;
    double SZORAS = sqrt(SOMETHING);
    printf("The standard deviation is: %lf\n", SZORAS);
}
