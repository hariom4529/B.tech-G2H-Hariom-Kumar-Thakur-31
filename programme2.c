#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,s,c;
    printf("Entar The Principle Rate And Time\n");
    scanf("%f%f%f", &p, &r, &t);
    s = ( p * r * t)/100;
    printf("The Simple Interest Is : %f\n",s);
    c= (p * pow((1 +r / 100), t)) - p;
    printf("The Compound Interest Is : %f \n",c);
    return 0;
}