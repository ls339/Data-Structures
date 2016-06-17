#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

struct node* createNode(int data){
  struct node* root;
  root = malloc(sizeof(struct node));
  root->data = data;
  root->left = NULL;
  root->right = NULL;
  return root;
}

void insert(struct node **root,int data){
  if(*root==NULL) *root = createNode(data);
  else
    if(data < (*root)->data) insert(&(*root)->left,data);
  else
    if(data > (*root)->data) insert(&(*root)->right,data);
}

void preOrder(struct node *root){
  if(root == NULL) return;
  printf("%d ",root->data);
  preOrder(root->left);
  preOrder(root->right);  
}

void postOrder(struct node *root){
  if(root != NULL) {
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
  }
}

void inOrder(struct node *root){
  if(root != NULL){
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
  }
}
