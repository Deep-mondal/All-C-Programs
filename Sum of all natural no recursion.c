#include<stdio.h>
int print(int low,int up)
{
    if(low==0&&up==0)
        return 0;
    if(low<up)
        return (low+print((low+1),up));
}
int main()
{
    int low ;int up,res;
    printf("\nEnter the lower limit:");
    scanf("%d",&low);
    printf("\nEnter the higher limit:");
    scanf("%d",&up);
    res=print(low,up);
    printf("%d\n",res);
    return 0;
}
