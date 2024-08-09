#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n-2;i++)
    {
       // printf("\n");
        for(j=1;j<=1;j++)
        {
            printf("*");
        }
        for(j=1;j<=(n-2);j++)
        {
            printf(" ");
        }
        for(j=1;j<=1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
       for(i=1;i<=1;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}