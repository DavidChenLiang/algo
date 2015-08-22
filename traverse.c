/*
 * =====================================================================================
 *
 *       Filename:  traverse.c
 *
 *    Description:  traverse.c
 *
 *        Version:  1.0
 *        Created:  2015年08月22日 11时30分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chen Liang (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "list.h"
#include "traverse.h"
int
preorder(const BiTreeNode *node, List *list){
    if (!bitree_is_eob()){
        if(list_ins_next(list, list_tail(list),bitree_data(node)) != 0)
            return -1;
        if (!bitree_is_eob(bitree_left()))
            if(preorder(bitree_left(node), list) != 0)
                return -1;
        if (!bitree_is-eob(bitree_right()))
            if (preorder(bitree_right(node), list) != 0)
                return -1;
    }
    return 0;
}
int
inorder(const BiTreeNode *node, List *list){
    if (!bitree_is_eob(node)){
        if (!bitree_is_eob(bitree_left(node)))
            if(inorder(bitree_left(node), list) != 0)
                return -1;
        if (list_ins_next(list, list_tail(list),bitree_data(node)) != 0)
            return -1;
        if (!bitree_is_eob(bitree_right(node)))
            if(inorder(bitree_right(node), list) != 0)
                return -1;
    }
    return 0;
}
int
postorder(const BiTreeNode *node, List *list){
    if (!bitree_is_eob(node)){
        if (!bitree_is_eob(bitree_left(node)))
            if (postorder(bitree_left(node),list) != 0)
                return -1;
        if (!bitree_is_eob(bitree_right(node)))
            if (postorder(bitree_right(node),list) != 0)
                return -1;
        if (list_ins_next(list, list_tail(list),bitree_data(node)) != 0)
            return -1;
    }
    return 0;
}
