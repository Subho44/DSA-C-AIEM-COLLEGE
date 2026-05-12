#include <stdio.h>

struct Student{
    int id;
    char name[60];
    float marks;
};

int main() {
    struct Student s[3]; //char store
    
    for(int i=0; i<3;i++){
        printf("Enter id: ");
        scanf("%d",&s[i].id);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
    }

     for(int i=0; i<3;i++){
        printf("Enter id: %d",s[i].id);
        printf("Enter name: %s",s[i].name);
        printf("Enter marks: %f\n",s[i].marks);
        
    }

    return 0;

    
}
