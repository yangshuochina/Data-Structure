
/* ----------------------------[includes]------------------------------------*/
#include "SequenceList.h"
#include "stdlib.h"

/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/
/**
 * Initialize a list.
 * @param L
 * @return
 */
Status InitList_Sq(SqList *L)
{
    L->elem = malloc(LIST_INIT_SIZE * sizeof(LElemType_Sq));
    if (NULL == L->elem)
    {
        return OVERFLOW;
    }
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return OK;
}

void ClearList_Sq(SqList *L)
{
    L->length = 0;
}

void DestroyList_Sq(SqList *L)
{
    if (L->elem)
    {
        free(L->elem);
    }
}
