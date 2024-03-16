#pragma once
//library.h

//structure to create the tree
typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

//functions from bstImplementation 
Node* createNode(char data);
Node* insert(Node* root, char data);
Node* search(Node* root, char data);
int countNodes(Node* root);
int treeHeight(Node* root);
void traversalInOrder(Node* root);
