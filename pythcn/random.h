#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randint(int min,int max,int seed=0){
    if(!seed){
        seed = time(NULL);
    }
    return rand() % (max-min);
}