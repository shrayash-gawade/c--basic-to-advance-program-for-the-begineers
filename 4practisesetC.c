#include<stdio.h>
int main()
{
    float g,c;
    printf("enter farenhiet value: \n");
    scanf("%f", &g);
    c=(g-32)/1.8;
    printf("the celcius value is %f",c);
    return 0;
}