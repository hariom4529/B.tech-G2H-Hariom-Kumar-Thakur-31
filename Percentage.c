#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, e, s, p;
    printf("Enter The Marks Of Each Subject\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    s = a + b + c + d + e;
    printf("The Sum Of Marks Is : %d\n", s);
    p = s * 100 / 500;
    printf("The Percentage Of Marks Is : %d\n", p);
    return 0;
}