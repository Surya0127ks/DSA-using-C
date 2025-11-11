#include <Stdio.h>
void main()

{
    int a = 5, b, c, d, e;
    // printf("%d\n",a);
    b = a++;
    // d=a;
    //  printf("%d\n",d);
    // printf("%d\n",b);
    b++;
    printf("%d\n", ++b);
    c = b;
    // c=++a + ++b;
    //  printf("%d\n",a);
    //  printf("%d\n",b);
    printf("%d\n", ++c);
}