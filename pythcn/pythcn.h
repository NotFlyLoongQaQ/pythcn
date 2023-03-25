#include <iostream>
#include <ctime>
#define True true;
#define False false;
#define PI 3.14159
#define max(a,b) (a>b ? a:b)
#define min(a,b) (a<b ? a:b)

#define swap(a,b) do { \
        int t = 0;\
        t = a; \
        a = b; \
        b = t; \
    } while(0)
#define upper( c ) ( ((c) >= 'a' && (c) <= 'z') ? ((c) - 0x20) : (c) )
#define isint( c ) ((c) >= '0' && (c) <= '9')
#define len( a ) ( sizeof( (a) ) / sizeof( (a[0]) ) )
using namespace std;

// Cpp-Pyc 2023/3/25
int randint(int min, int max)
{
    srand((unsigned) time(NULL));
    // Rand范围公式 a+rand%(b-a);
    int a = min, b = max;
    int r;
    r = a + rand() % (b - a);
    return r;
}

int print(char *text, char *endl = "\n")
{
    cout << text << endl;
    return 0;
}

double pow(double a, int b)
{
    int k = 1;
    for (int i; i < b; i++) {
        k *= a;
    }
    return k;
}

bool Bool(int x)
{
    if (x) {
        return True;
    } else {
        return False;
    }
}
