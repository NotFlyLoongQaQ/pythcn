#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "std.h"
int randint(int min,int max,int seed=0){
    if(!seed){
        seed = time(NULL);
    }
    return rand() % (max-min);
}

int choice_int(int* lists){
    int listlen = len(lists);
    return lists[randint(0,listlen)];
} //其他数组自己搞 懒得复制粘贴了