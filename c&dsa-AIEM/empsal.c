#include <stdio.h>
int main() {
    int arr[5] = { 4000,2000,5000,3000,1000};
    int i,j,min,temp;
    for(i=0; i<5-1;i++){
        min=i;
        for(j=i+1;j<5;j++){
            if(arr[j]<arr[min]) {
                min= j;
            }
        }
               temp= arr[i];
                arr[i] = arr[min];
                arr[min] = temp;

    }
    printf("sorted salary:");
     for(i=0; i<5;i++){
        printf("%d \n",arr[i]);
    }
      
    return 0;
}