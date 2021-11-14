#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


void inverse(struct node* root){
    if (root == NULL){
        return;
    }
    struct node* temp;

    inverse(root->left);
    inverse(root->right);

    temp = root->left; 
	root->left = root->right; 
	root->right = temp;
}

void traverse(struct node* root){
    if (root == NULL){
        return;
    }

    printf("%d", root->val);
    traverse(root->left);
    traverse(root->right);
    
}

struct node* maketree(){
    struct node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    return root;
}

int main(){
    struct node* root = maketree();
    traverse(root);
    printf("\n");
    inverse(root);
    traverse(root);
    return 0;
}