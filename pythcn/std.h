#include <stdio.h>
#include <stdlib.h>
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

int min(int* lists){
    int min = 0;
    int i = 0;
    for(i = 0; i < sizeof lists / sizeof lists[0]; i++) {
        if(lists[i] < min){
            min = lists[i];
        }
    }
    return min;
}

double pow(double number,int power){
    int i = 0;
    double r = 0;
    for(i = 0; i < power; i++) {
        r += number;
    }
    return r;
}

char* input(char* text,char* tips){
    print(tips," ");
    char r[25565];
    scanf("%s",r);
    return r;
}

int int_len(int* lists){
    return sizeof lists / sizeof lists[0];
}

int char_len(char* lists){
    return sizeof lists / sizeof lists[0];
}

int double_len(double* lists){
    return sizeof lists / sizeof lists[0];
}

int long_len(long* lists){
    return sizeof lists / sizeof lists[0];
}

void help(){
    print("Pythcn ver 0.1.0 alpha");
}

bool any(bool* lists){
    for(int i = 0; i < sizeof lists / sizeof lists[0]; i++) {
        if(lists[i] == true){
            return true;
        }
    }
    return false;
}
