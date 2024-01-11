#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  int height;
  struct Node* left;
  struct Node* right;
};

struct Node* root;

int height(struct Node* node) {
  if (node == NULL) {
    return -1;
  }
  return node->height;
}

int max(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

struct Node* insert(struct Node* node, int val) {
  if (node == NULL) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    node->value = val;
    return node;
  }
  if (val < node->value) {
    node->left = insert(node->left, val);
  }
  if (val > node->value) {
    node->right = insert(node->right, val);
  }
  node->height = max(height(node->left), height(node->right)) + 1;
  return node;
}

void insertInTree(int val) {
  root = insert(root, val);
}

void populateTree(int arr[]) {
  for (int i = 0; i < 7; i++) {
    insertInTree(arr[i]);
  }
}

int isBalanced(struct Node* node) {
  if (node == NULL) {
    return 1;
  }
  if (abs(height(node->left) - height(node->right)) <= 1 && isBalanced(node->left) == 1 && isBalanced(node->right) == 1)
  {
    return 1;
  }
  return 0;
}

int main() {
  int arr[] = {5, 7, 2, 8, 10, 1, 3};
  populateTree(arr);
  printf("%d", isBalanced(root));
  return 0;
}
