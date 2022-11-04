#include<stdio.h>
int main()
{
    int r;
    float a, pi;
    pi=22/7;
    printf("enter the radius of circle :");
    scanf("%d",&r);
    a=pi*r*r;
    printf("the area of circle is : %f",a);
    return 0;
}