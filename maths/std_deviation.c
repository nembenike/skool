#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int LENGTH;
    printf("how many numbers do you want to give?\n");
    scanf("%i", &LENGTH);
    int NUMBERS[LENGTH];
    float AVERAGE;
    for(int i = 0; i <= LENGTH-1; i++){
        printf("give %i. number\n", i+1);
        scanf("%i", &NUMBERS[i]);
    }
    int NUMSUM = 0;
    for (int i = 0; i <= LENGTH-1; i++){
        NUMSUM = NUMSUM+NUMBERS[i];
    }
    AVERAGE = NUMSUM/LENGTH;
    printf("The average is: %f\n", AVERAGE);
    float SOMESUM = 0;
    for (int i = 0; i <= LENGTH-1; i++){
        SOMESUM += pow(NUMBERS[i]-AVERAGE, 2);
    }
    float SOMETHING = SOMESUM/LENGTH;
    float SZORAS = sqrtf(SOMETHING);
    printf("The standard deviation is: %f\n", SZORAS);
}
