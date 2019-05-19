#include <stdio.h>
#include "SequenceList.h"

int main() {
    SqList L;
    InitList_Sq(&L);
	printf("L's length is %d\n", L.length);
    printf("L's size is %d\n", L.listsize);
    DestroyList_Sq(&L);
	return 0;
}