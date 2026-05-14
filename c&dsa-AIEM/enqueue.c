#include <stdio.h>
#define SIZE 5

int queue[5];
int rear,front;

void en(int value){
    if(rear == SIZE-1){
        printf("OVERFLOW");
    } else {
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("value pass %d\n",value);
    }

}

int main() {
    en(20);
    en(30);
    en(40);
    en(50);
    
    return 0;

}