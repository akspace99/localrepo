// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};
//creating a new node
struct node* newnode(int data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=node->right=NULL;
        return node;
}
 void preOrder(struct node* root){
     if(root==NULL){
     return;
 }
 printf("%d",root->data);
 preOrder(root->left);
 preOrder(root->right);
 }
int main() {
    // Write C code here
    struct node* newnode1=newnode(1);
    newnode1->left=newnode(2);
    newnode1->right=newnode(3);
    newnode1->left->left=newnode(4);
    newnode1->left->right=newnode(5);
    newnode1->right->right=newnode(6);
    
    preOrder(newnode1);
}