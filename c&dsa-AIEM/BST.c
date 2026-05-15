//Q1) BST: INSERT,SEARCH,TRAVERSAL

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

//create node
struct Node* createNode(int value){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right =NULL;

    return newnode;

}

struct Node* insert(struct Node* root,int value){
    if(root == NULL){
        return createNode(value);
    }
    if(value < root->data){
        root->left = insert(root->left,value);
    }
    else if (value < root->data){
        root->right = insert(root->right,value);
    }
    return root;

}

void inorder(struct Node* root) {
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if(root != NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node* root) {
    if(root != NULL){
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
}

int search(struct Node* root,int key){
    if(root == NULL){
        return 0;
    }

    if(root->data == key) {
        return 1;
    }
    if(key <root->data){
        return search(root->left,key);
    } else 
    {
         return search(root->right,key);
    }
}

int main() {
    struct Node* root = NULL;

    root = insert(root,50);
    root = insert(root,60);
    root = insert(root,70);
    root = insert(root,80);
    root = insert(root,90);
    root = insert(root,20);
    root = insert(root,30);

    printf("inorder traversal:");
    inorder(root);

    printf("\n prerder traversal:");
    preorder(root);

    printf("\n postorder traversal:");
    postorder(root);

    int key = 90;
    if(search(root,key)){
        printf("\n %d show tree:", key);
    } else {
        printf("\n %d not show tree:", key);
    }

    return 0;

}


