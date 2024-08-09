#include<stdio.h>
#include<math.h>
int nude(int x)
{
    int ac,rem,i,p,f_rem;
    int count=0,ok=0;
        ac=x;
    while(x>0)
    {
        rem=x%10;
        count++;
        x/=10;
    }
    for(i=count;i>0;i--)
    {
        p=pow(10,(count-1));
        f_rem=x/p;
        if(f_rem==0)
        printf("It is not a NUDE number");
        if(ac%f_rem==0)
        ok++;
        x=x%p;
    }
    if(ok==count)
    printf("It is a NUDE NUMBER\n");
    else
    printf("It is not a NUDE NUMBER\n");
}
int main(int num)
{
   printf("\nEnter a number:");
   scanf("%d",&num);
   nude(num);
   return 0; 
}