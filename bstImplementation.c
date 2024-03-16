//implementation.c

#include <stdio.h>
#include <stdlib.h>
#include "library.h"

//to create the node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//to insert to the node
Node* insert(Node* root, char data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

//to search inside the tree 
Node* search(Node* root, char data) {
    if (root == NULL || root->data == data) {
        return root;
    }
    if (data < root->data) {
        return search(root->left, data);
    }
    return search(root->right, data);
}


int countNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

//find the bigger one
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

//gives the height of the tree
int treeHeight(Node* root) {
    if (root == NULL) {
        return -1;
    }
    return 1 + maximum(treeHeight(root->left), treeHeight(root->right));//recurssion
}

//to traverse the node in order
void traversalInOrder(Node* root) {
    if (root != NULL) {
        traversalInOrder(root->left);
        printf("%c ", root->data);
        traversalInOrder(root->right);
    }
}
