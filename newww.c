#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to create a new node with given value
struct TreeNode *newNode(int val)
{
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to print nodes in given level range
void printLevel(struct TreeNode *root, int level1, int level2)
{
    if (root == NULL)
    {
        return;
    }
    if (level1 == 0 && level2 == 0)
    {
        printf("%d ", root->val);
        return;
    }
    if (level1 <= 0 && level2 >= 0)
    {
        printf("%d ", root->val);
    }
    printLevel(root->left, level1 - 1, level2 - 1);
    printLevel(root->right, level1 - 1, level2 - 1);
}

// Function to print level order traversal of given tree
void printLevelOrder(struct TreeNode *root)
{
    int h = 0, i;
    for (i = 0;; i++)
    {
        if ((1 << i) > h)
        {
            h = 1 << i;
        }
        else
        {
            break;
        }
    }
    for (i = 0; i < h; i++)
    {
        printLevel(root, i, i);
        printf("\n");
    }
}

// Function to construct binary tree from given array
struct TreeNode *constructTree(int arr[], int i, int n)
{
    if (i >= n || arr[i] == -1)
    {
        return NULL;
    }
    struct TreeNode *root = newNode(arr[i]);
    root->left = constructTree(arr, 2 * i + 1, n);
    root->right = constructTree(arr, 2 * i + 2, n);
    return root;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct TreeNode *root = constructTree(arr, 0, n);
    printLevelOrder(root);
    return 0;
}