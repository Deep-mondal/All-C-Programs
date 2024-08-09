#include<stdio.h>
int fact(int n);
int main()
{
    int c,d;
  printf("Enter two numbers:");
  scanf("%d ",&c);
  printf("the result is %d",fact(c));
  return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    return fact;
}