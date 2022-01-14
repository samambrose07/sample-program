#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char a=0x08;
    unsigned char b=0x0f;
    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a<<1);
    printf("%d\n", b>>1);
    return 0;
}
