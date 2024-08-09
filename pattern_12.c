#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 5;
}