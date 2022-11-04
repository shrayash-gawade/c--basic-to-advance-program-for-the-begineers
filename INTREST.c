#include<stdio.h>
int main()
{
    int s,p,t,r;
    printf("enter principal amount :  ");
    scanf("%d",&p);
    printf("enter yrs:");
    scanf("%d",&t);
    printf("enter rate of intrest : ");
    scanf("%d",&r);
    s=(p*t*r)/100;
    printf("the simple intrest is : %d",s);
    return 0;
}