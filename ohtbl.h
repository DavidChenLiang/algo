/*
 * =====================================================================================
 *
 *       Filename:  ohtbl.h
 *
 *    Description:  ohtbl.h
 *
 *        Version:  1.0
 *        Created:  2015年08月17日 20时26分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef OHTBL_H
#define OHTBL_H
#include <stdlib.h>
typedef struct ohtbl_{
    int		positions;
    void	*vacated;

    int		(*h1)(const void *key);
    int 	(*h2)(const void *key);
    int 	(*match)(const void *key1, const void *key2);
    void 	(*destroy)(void *data);

    int		size;
    void	**table;
}
int ohtbl_init(OHTbl *htbl, int positions,int (*h1)(const void *key), int (*h2)(const void *key),
			int (*match)(const void *key1,const void *key2),
			void (*destroy)(void *data));
void ohtbl_destroy(OHTbl *htbl);
int ohtbl_insert(OHTbl *htbl, const void *data);
int ohtbl_remove(OHTbl *htbl, void **data);
int ohtbl_lookup(const OHTbl *htbl, void **data);

#define ohtbl_size(htbl)	((html)->size)
#endif
