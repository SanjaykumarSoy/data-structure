#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *right;
    struct node *left;
};

struct node* createNode(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value; // Corrected variable name
    newnode->left = newnode->right = NULL;
    return newnode;
}

void kth(struct node* root, int k, int* count, int* result) {
    if (root == NULL || *count >= k)
        return;
    kth(root->left, k, count, result);
    (*count)++;
    if (*count == k) {
        *result = root->data;
        return;
    }
    kth(root->right, k, count, result); // Corrected syntax
}

int kthSmallest(struct node* root, int k) {
    int count = 0;
    int result = -1;
    kth(root, k, &count, &result);
    return result;
}

int main() {
    struct node* root = createNode(3);
    root->left = createNode(1);
    root->right = createNode(4);
    root->left->right = createNode(2);

    int k = 1;
    printf("Kth smallest element for k = %d is: %d\n", k, kthSmallest(root, k));

    return 0;
}
