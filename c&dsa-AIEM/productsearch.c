#include <stdio.h>

int main() {
 
    int productid[5] = {101,102,103,104,105};
    int serachid, i, found = 0;
    printf("enter the productid: ");
    scanf("%i",&serachid);

    for(i=0; i<5;i++){
        if(productid[i] ==serachid){
            found = 1;
            break;

        }
    }

    if(found == 1) {
        printf("product display....");
    } else {
        printf("product not display....");
    }

    return 0;

}