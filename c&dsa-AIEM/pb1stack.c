/*
Browser history managment system using stack
.website history save
.new website open
.back button work
.current page display
 use lifo rules
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5

char stack[SIZE][50];
int top = -1;

//push opr
void visitwebsite(char url[]){
    if(top == SIZE -1){
        printf("\n history full overflow\n");
    }
    else{
        top++;
        strcpy(stack[top],url);
        printf("\n visted:%s\n", url);
    }

}
//pop opr
void goback(){
    if(top == -1){
        printf("\n no history show \n");
    }
    else{
        printf("\n back:%s\n", stack[top]);
        top--;
    }

}
//display cr page
void currentpage(){
    if(top == -1){
        printf("\n no current page \n");
    }
    else{
        printf("\n current page:%s\n", stack[top]);
        
    }

}

//display full history

void dh(){
    if(top == -1){
        printf("\n no browser history \n");
    }
    else{
        printf("\n browser history:%s\n");
        for(int i=top; i >=0; i--){
            printf("%s\n",stack[i]);
        }
        
    }

}

int main() {
    visitwebsite("google");
    visitwebsite("youtube");
    visitwebsite("facebook");

    currentpage();
    dh();
    goback();
    currentpage();
    dh();
    return 0;
}