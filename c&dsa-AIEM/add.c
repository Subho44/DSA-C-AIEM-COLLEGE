#include <stdio.h>

int main(){

    int marks[5];
    int i,total = 0;
    float average;

    printf("enter makrks of 5 subject: ");

    for(i=0;i<5;i++) {
        scanf("%d", &marks[i]);
        total = total + marks[i];

    }
    average = total/5.0;
    printf("total marks: %d\n", total);
    printf("avg marks: %f\n", average);

    return 0;

}