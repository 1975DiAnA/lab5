#include "Header.h"
void main() {
    Node* root = NULL;
    insert(&root, 10);
    insert(&root, 15);
    insert(&root, 5);
    insert(&root, 2);
    insert(&root, 8);
    insert(&root, 12);
    insert(&root, 19);
    prym_print(root);
    printf("\n");
    sim_print(root);
    printf("\n");
    obr_print(root);
    printTree(root);
}
