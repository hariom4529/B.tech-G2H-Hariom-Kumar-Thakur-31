#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of a ; ");
    scanf("%f",&a);
    printf("Enter the value of b ; ");
    scanf("%f",&b);
    printf("Enter the value of c ; ");
    scanf("%f",&c);
    if(a > b && a > c){
    printf("a Is The Greatest Number");
    }
    else if (b > a && b > c){
    printf("b Is The Greatest Number");
    if(c > a && c > b)
    printf(" c Is The Greatest Number");
    }
    return 0 ;
    }