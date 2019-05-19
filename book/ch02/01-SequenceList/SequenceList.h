#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include "../../ch01/Status.h"

#define LIST_INIT_SIZE      (100U)
#define LIST_INCREMENT      (10U)

#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int LElemType_Sq;
#endif

typedef struct {
    LElemType_Sq *elem; /* 存储空间基地址 */
    int length;  /* 当前长度 */
    int listsize; /* 当前分配的存储容量 */
} SqList;

Status InitList_Sq(SqList *L);  /* Create a list */

void ClearList_Sq(SqList *L);  /* Clear list */

void DestroyList_Sq(SqList *L); /* Destroy list */

Status ListEmpty_Sq(SqList L); /* Is list empty? */

int ListLength_Sq(SqList L);

Status GetElem_Sq(SqList L, int i, LElemType_Sq *e); /* Is list empty? */

int LocateElem_Sq(SqList L, LElemType_Sq e, Status(Compare)(LElemType_Sq, LElemType_Sq));

Status PriorElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *pre_e);

/**
 * Get next element for current one from giving list L.
 * @param L
 * @param cur_e
 * @param next_e
 * @return
 */
Status NextElem_Sq(SqList L, LElemType_Sq cur_e, LElemType_Sq *next_e);

Status ListInsert_Sq(SqList *L, int i, LElemType_Sq e);

Status ListDelete_Sq(SqList *L, int i, LElemType_Sq *e);

Status ListTraverse_Sq(SqList L, void (Visit)(LElemType_Sq));
#endif /* SEQUENCELIST_H */
