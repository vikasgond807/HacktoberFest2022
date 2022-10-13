#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    //Function to find the height of a binary tree.
    int height(struct Node *node)
    {
        // code here
        if (!node)
            return 0;

        int left = height(node->left);
        int right = height(node->right);

        return (max(left, right) + 1);
    }
};

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)