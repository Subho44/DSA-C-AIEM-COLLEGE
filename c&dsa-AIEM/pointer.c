#include <stdio.h>

int main(){
int x = 10;
int *ptr;

ptr = &x;

printf("value =%d\n",x);
printf("address =%p\n",&x);
printf("pointer value =%d",*ptr);
return 0;

}