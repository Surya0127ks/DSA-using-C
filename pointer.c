#include <stdio.h>
void main()
{
    int a = 5;
    int *b, **c;
    b = &a;
    c = &b;
    printf("%d\n", b);
    printf("%d\n", *b);
    printf("%d\n", **c);
}
