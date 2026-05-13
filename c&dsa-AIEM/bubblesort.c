#include <stdio.h>

int main() {
    int arr[5] = { 40,20,50,30,10};
    int i,j,temp;
    for(i=0; i<5-1;i++){
        for(j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]) {
                temp= arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("assending order after swap\n: ");
    for(i=0; i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}