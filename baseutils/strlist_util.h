#ifndef STRLIST_UTIL_H_
#define STRLIST_UTIL_H_

#include "base_util.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct StrList {
    struct StrList *    next;
    char *              str;
} StrList;

char *  StrDupN(char *str, size_t len);
char *  StrDup(char *str);

int     StrList_Len(StrList **root);
BOOL    StrList_InsertAndOwn(StrList **root, char *txt);
BOOL    StrList_Insert(StrList **root, char *txt);
void    StrList_Destroy(StrList **root);

#ifdef __cplusplus
}
#endif

#endif
