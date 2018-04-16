/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 } TreeNode;
struct TreeNode* mergeTrees(TreeNode* t1,TreeNode* t2) {
    struct TreeNode* temp = malloc(sizeof(TreeNode));
    if(t1 == NULL) return t2;
    if(t2 == NULL) return t1;
    while (t1 != NULL){
        if(t2 != NULL){
            temp->val= t1->val + t2->val;
            if(t1->left == NULL && t2->left != NULL){
            	t1->left == malloc(sizeof(TreeNode));
            	t1=t1->left;
            	t2=t2->left;
            }
        }
    }
}

