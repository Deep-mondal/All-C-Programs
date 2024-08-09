#include<stdio.h>
int power(int base,int p)
{
    if(p==0)
        return 1;
    else if(p==1)
        return base;
    else
        return (base*power(base,(p-1)));
}
int main(int base,int p,int result)
{
    printf("\nEnter the base:");
    scanf("%d",&base);
    printf("\nEnter the power:");
    scanf("%d",&p);
    result=power(base,p);
    printf("%d",result);
    return 0;
}
