#include<stdio.h>
int print(int low,int up)
{
    if(low==0&&up==0)
        return 0;
        printf("%d",low);
    if(low<up)
        return print((low+1),up);
}
int main()
{
    int low ;int up,res;
    printf("\nEnter the lower limit:");
    scanf("%d",&low);
    printf("\nEnter the higher limit:");
    scanf("%d",&up);
    res=print(low,up);
    return 0;

}