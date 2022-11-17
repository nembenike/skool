#include <stdio.h>

int main()
{
    int num = 10;
    int testnum = num;
    int len = 0;
    
    for (int i = 0; testnum != 0; i++){
        testnum =  testnum/2;
        len++;
    }
    
    
    
    printf("array len: %d\n", len);
    
    while (num != 0){
        printf("%d", num%2);
        num = num/2;
    }
}
// wip
