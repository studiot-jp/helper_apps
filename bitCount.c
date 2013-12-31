#include <stdio.h>
#include <string.h>

typedef unsigned char UB;
typedef unsigned short UH;
typedef unsigned int UINT;
typedef unsigned long UW;

UW bitCount(UW i) {
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    i = (i + (i >> 4)) & 0x0f0f0f0f;
    i = i + (i >> 8);
    i = i + (i >> 16);
    return i & 0x3f;
}


int main()
{
    UW i = 0x001F0000;
    printf("%d\n", bitCount(i));

    return 0;
}
