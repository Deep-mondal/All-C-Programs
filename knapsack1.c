#include <stdio.h>
int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}
int knapsack(int W, int wt[], int val[], int n)
{
   int i, j;
   int K[n+1][W+1];
   for (i=0;i<=n;i++)
   {
       for (j=0;j<=W;j++)
       {
           if (i==0 || j==0)
               K[i][j] = 0;
           else if (wt[i-1]<=j)
                 K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],K[i-1][j]);
           else
                 K[i][j]=K[i-1][j];
       }
   }
	printf("\n Status \n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=W;j++)
			printf("%4d",K[i][j]);
		printf("\n");
    }
   return K[n][W];
}
int main()
{
    int n;
    printf("\nEnter Total No. of Items :");
    scanf("%d",&n);
    int val[n],wt[n],W,i;
    for(i=0;i<n;i++)
    {
    	printf("\nEnter value:");
    	scanf("%d",&val[i]);
    	printf("Enter its weight:");
    	scanf("%d",&wt[i]);
	}
	printf("\nEnter Max Weight allowed :");
    scanf("%d",&W);
    printf("\nAnswer = %d", knapsack(W, wt, val, n));
    return 0;
}
