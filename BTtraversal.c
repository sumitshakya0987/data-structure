#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int idx=-1;
struct node* insert(int A[]){
    idx++;
    if(A[idx]==-1){
        return NULL;
    }
      struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = A[idx];
    temp->left=insert(A);
    temp->right=insert(A);
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("\t%d\t",root->data);
    inorder(root->right);
}
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("\t%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("\t%d\t",root->data);
}

void main(){
    printf("sumit shakya IT-C 2100320130173\n");
    int nodes[]= {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    struct node* root=insert(nodes);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\nPretorder traversal: ");
    preorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);
}