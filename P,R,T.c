#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    float SI, CI;

    printf("Enter P,R,T: ");
    scanf("%d %d %d",&P,&R,&T);

    SI=(P*R*T)/100.0;
    CI=P*pow((1+R/100.0),T)-P;

    printf("SI is %1f\n", SI);
    printf("CI is %1f", CI);

    return 0;
}