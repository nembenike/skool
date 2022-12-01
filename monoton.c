#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    printf("milyen hosszu sorozatot akarsz megadni?\n");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i <= n-1; i++){
        printf("give %d. number\n", i+1);
        scanf("%d", &arr[i]);
    }
    
    bool monDes = false;
    bool monAsc = false;
    int prevNum = arr[0];
    
    
    if (prevNum > arr[1]){
        int rem = prevNum-arr[1];
        for (int i = 1; i <= n-1; i++){
            // descending?
            if (prevNum-rem==arr[i] || prevNum > arr[i]){
                //printf("descending\n");
                monDes = true;
                prevNum = arr[i];
            } else {
                monDes = false;
                break;
            }
        }
    } else if (prevNum < arr[1]) {
        // ascendign?
        int rem = arr[1]-arr[0];
        for (int i = 1; i <= n-1; i++){
            if (prevNum+rem==arr[i] || prevNum < arr[i]){
                //printf("ascending\n");
                monAsc = true;
                prevNum = arr[i];
            } else {
                monAsc = false;
                break;
            }
        }
    }
    
    if (monAsc == true){
        printf("monoton no");
    } else if(monDes == true) {
        printf("monoton csokken");
    } else{
        printf("egyik sem");
    }
    
    return 0;
}
