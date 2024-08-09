#include<stdio.h>
#include<stdlib.h>
#define size 10
void quick(int*a[size],int low,int up)
{
    int r=up,l=low,p=low,s;
   while(1<2)
   {
    while(a[r]<=a[p]&&p!=r)
    r--;
    if(p!=r)
    break;
    if(a[r]<=a[p])
    {
        s=a[p];
        a[p]=a[r];
        a[r]=s;
        p=r;
    }
    while(a[l]>=a[p]&&p!=l)
    l++;
    if(p!=l)
    break;
    if(a[l]>=a[p])
    {
        s=a[p];
        a[p]=a[l];
        a[l]=s;
        p=l;
    }
    }
    quick(a[size],low,p-1);
    quick(a[size],p+1,up);
 }
 int main()
 {
    int i,b[size];
    for(i=0;i<size;i++)
    {
        printf("\nEnter the %d th element",i);
        scanf("%d",&b[i]);
    }
    quick(b[size],0,size-1);
    printf("\nAfter quick sort the result is:");
    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
    printf("THANK YOU!");
    return 0;
 }
