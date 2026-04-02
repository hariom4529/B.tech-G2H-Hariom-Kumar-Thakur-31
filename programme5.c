#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a : ");
scanf("%d",&a);
printf("Enter The Value of B : ");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("The value of a : %d \n", a);
printf("The value of b : %d \n", b);
return 0;
}