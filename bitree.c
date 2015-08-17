/*
 * =====================================================================================
 *
 *       Filename:  bitree.c
 *
 *    Description:  bitree.c  
 *
 *        Version:  1.0
 *        Created:  2015年08月17日 20时45分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>
#include "bitree.h"
void
bitree_init(BiTree *tree, void (*destroy)(void *data)){
    tree->size = 0;
    tree->destroy = destroy;
    tree->root = NULL;
    return;
}

void
bitree_destroy(BiTree *tree){
    bitree_rem_left(tree, NULL);
    memset(tree, 0, sizeof(BiTree));
    return;
}
int
bitree_ins_left(BiTree *tree, BiTreeNode *node, const void *data){
    BiTreeNode *new_node, **position;
    if (node == NULL){
	if(bitree_size(tree)>0)
	    return -1;
	position = &tree->root;
    }else{
	if(bitree_left(node)!=null)
	    return -1;
	position = &node->left;
    }
    if((new_node = (BiTreeNode *)malloc(sizeof(BiTreeNode))) == NULL)
	return -1;
    new_node->data = (void *)data;
    new_node->left = null;
    new_node->right = null;
    *position = new_node;
    tree->size++;
    return 0;
}
int
bitree_ins_right(BiTree *tree, BiTreeNode *node, const void *data){
    BiTreeNode *new_node, **position;
    if (node == NULL){
	if (bitree_size(tree)>0)
	    return -1;
	position = &tree->root;
    }else{
	if(bitree_right(node)!=NULL)
	    return -1;
	position = &node->right;
    }
    if((new_ndoe = (BiTreeNode *)malloc(sizeof(BiTreeNode))) == NULL)
	return -1;
    new_node->data = (void *)data;
    new_node->left = NULL;
    new_node->right = NULL;
    *position = new_code;
    tree->size++;
    return 0;
}




