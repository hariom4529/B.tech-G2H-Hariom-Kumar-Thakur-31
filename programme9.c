#include<stdio.h>
#include<math.h>
int main (){
    int a;
    printf ("Enter The Year \n");
    scanf("%d",&a);
    if ((a%400==0) || a%4==0 && a%100!=0)
    { printf("Given Year Is A leap Year ");
    }
    else
    { printf(" Give The Year Is Not A Leap Year");
    }
    return 0;
}