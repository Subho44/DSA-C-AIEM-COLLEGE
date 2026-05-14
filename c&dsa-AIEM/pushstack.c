#include <stdio.h>

int stack[5];
int top = -1;

void push(int value){
    if(top == 4) {
        printf("stack overflow");
    }
    else {
        top++;
        stack[top] = value;
        printf("%d insert\n", value);
    } 
}

int main(){
    push(10);
     push(20);
      push(30);

      return 0;

}