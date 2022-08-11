#include <bits/stdc++.h>
using namespace std;

class TreeNode {
    public: 
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* NewNode(int data){
    TreeNode* node = new TreeNode();
    node -> val = data;
    node -> right = node -> left = NULL;
    return node;
}

vector<int> preorderTraversal

int main()
{
    
    TreeNode * root NewNode(3);
    root -> left = NewNode(9);
    root -> right = NewNode(9);
    root -> left -> left = NewNode(15);
    root -> left -> right = NewNode(7);
    root -> right -> left = NewNode(15);
    root -> right -> right = NewNode(7);

    vector<int> ans;
    ans = preorderTraversal(root);

    // Printing ans
    for (auto n : ans)
    {
        cout << n << " ";
    }

    return 0;
}