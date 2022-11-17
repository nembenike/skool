#include <stdio.h>

int main()
{
    // funny code a user inputhoz
    int num;
    printf("Adj meg egy szamot: ");
    scanf ("%d", &num);
    // szam
    //int num = 10;
    // ugyanaz a szam de ezzel nezem meg h milyen hosszu legyen az array
    int testnum = num;
    // ebbe szamolom h milyen hosszu legyen a cucc
    int len = 0;
    
    // while loop ami megnezi h milyen hosszu lesz az array
    while (testnum != 0){
        testnum = testnum/2;
        len++;
    }
    
    // random debug code
    //printf("array len: %d\n", len);
    // letrehozom az arrayt len hosszsaggal
    int array[len];
    
    // for loop ami atkonvertalja binarisba es berakja egy arraybe a maradekokat
    for (int i = 0; num != 0; i++){
        array[i] = num%2;
        num = num/2;
    }
    
    // for loop az array visszafele printelesehez
    for (int i = len-1; i >= 0; i--){
        printf("%d", array[i]);
    }
}
