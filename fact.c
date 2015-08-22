/*
 * =====================================================================================
 *
 *       Filename:  fact.c
 *
 *    Description:  fact.c
 *
 *        Version:  1.0
 *        Created:  2015年08月22日 16时45分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chen Liang (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "fact.h"
#include "facttail.h"
int
main(void){
    printf("fact(4)  = %d\n",fact(4));
    printf("facttail(4,1)  = %d\n",facttail(4,1));
    return 0;
}
int
fact(int n){
   if (n < 0 ) 
       return 0 ;
   else if (n == 0)
       return 1;
   else if (n == 1)
       return 1;
   else
       return n * fact(n -1);
}
int
facttail(int n,int a){
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else if (n == 1)
        return a;
    else
        return facttail(n -1, n *a);

}
