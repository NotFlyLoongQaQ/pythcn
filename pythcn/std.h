#include <stdio.h>
#define endl "\n"

int print(char* text,char* end=0){
    if(!end){
        printf(text,end);
    }else{
        printf(text,endl);
    }
    return 0;   
}

int println(char* text){
    print(text,endl);
    return 0;
}

int max(int* lists){
    int max = 0;
    int i = 0;
    for(i = 0; i < sizeof lists / sizeof lists[0]; i++) {
        if(lists[i] > max){
            max = lists[i];
        }
    }
    return max;
}