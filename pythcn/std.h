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
    printf("%s\n",text);
}