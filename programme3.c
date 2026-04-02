#include<stdio.h>
#include<math.h>
int main(){
float R,c,a;
printf(" enter radius os circle /n" );
printf("R=radius of circle, C=circumference of cirele,A=area of circle /n ");
scanf( "%F", &R);
c=(2*3.14*R);
printf(" circumference of circle %f ", c);
a=(3.14*R*R);
printf("area of circle is %f",a);
return 0;
}