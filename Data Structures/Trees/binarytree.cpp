#include<bits/stdc++.h>
using namespace std;
//Swati Tripathi (swati-gwc)
struct Node{

    int data;
    struct Node* left;
    struct Node* right;

};

struct Node* newNode(int data)
{

    struct Node* node = new Node;
    node->data = data ;
    node->left = NULL;
    node->right = NULL;
    return node;
};

void printInorder(struct Node* node)
{

    if(node==NULL) return;

    printInorder(node->left);
    cout<<node->data;
    printInorder(node->right);

}
void printPreorder(struct Node* node)
{

    if(node==NULL) return;
    cout<<node->data;
    printPreorder(node->left);

    printPreorder(node->right);

}
void printPostorder(struct Node* node)
{

    if(node==NULL) return;

    printPostorder(node->left);

    printPostorder(node->right);
    cout<<node->data;

}

int maxD (struct Node* node)
{
    if(node==NULL)
        return 0;
    else{
        int ldepth = maxD(node->left);
        int rdepth = maxD(node->right);
        if(ldepth>rdepth)
        {

            return ldepth+1;
        }

        else
        {

              return rdepth+1;
        }

    }
}
int totalNodes(struct Node* node)
{
    if(node==NULL) return 0;
    else{

        return (totalNodes(node->left)+totalNodes(node->right)+1);
    }

}

int main()
{
    struct Node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right= newNode(7);


    cout<<"\nProgram on operations of binary tree : ";
    cout<<"\nInorder traversal of the binary tree : ";printInorder(root);
    cout<<"\nPreorder traversal of the binary tree : ";printPreorder(root);
    cout<<"\nPostorder traversal of the binary tree : ";printPostorder(root);
    cout<<"\nMaximum Height of the binary tree : "<<maxD(root)<<endl;
    cout<<"Total Nodes in the binary tree : "<<totalNodes(root)<<endl;

}
