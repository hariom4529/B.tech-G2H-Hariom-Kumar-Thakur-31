#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a,b,c;
    printf("enter the length of fibonnaci series");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d \t %d",a,b);
    for (int i = 0; i < n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
    

    return 0;
}
