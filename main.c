//Name:Meera Kurup
//Lab 2
//Binary Search Tree
//main.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"

int main() {
    srand(time(NULL));
    Node* root = NULL;
    //to assign random number of chars between 11 and 20
    int num_chars = rand() % 10 + 11; 
    printf("number of characters that needed to be inserted: %d\n", num_chars);

    printf("inserting charecters to tree:\n");
    for (int i = 0; i < num_chars; i++) {
        // to assign random char from a to z
        char data = 'a' + rand() % 26; 
        printf("%c ", data);
        root = insert(root, data);
    }

    printf("\n");

    printf("Traversal of the tree ( In alphabetical order): \n");
    traversalInOrder(root);
    printf("\n");
    printf("number of nodes in the tree: %d", countNodes(root));
    printf("\nHeight of the tree: %d\n", treeHeight(root));

    return 0;
}
