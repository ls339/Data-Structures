#ifndef BINARYTREE_HEADER
#define BINARYTREE_HEADER "BinaryTree.h"

struct node {
  int data;
  struct node* left;
  struct node* right;
};

void insert(struct node **root,int data);
struct node* createNode(int data);
struct node* createTree();
void inOrder();
void preOrder();
void postOrder();

#endif
