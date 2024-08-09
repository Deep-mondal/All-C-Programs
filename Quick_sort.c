#include<stdio.h>
#define size 5
int partition(int* a,int low,int up)
{
    int i, j,temp;
    int pivot=a[up];
    j=low-1;
    for(i=low;i<size;i++)
    {
       if(a[i]<pivot)
       {   j=j+1;//j=i
           temp=a[j];
           a[i]=a[j];
           a[j]=temp;

       }
    }
    temp=a[j+1];
    a[j+1]=a[up];
    a[up]=temp;
    return j+1;
}
void quick_sort(int* a,int low,int up)
{
    if(low<up)
    {
    int p=partition(a,low,up);
    quick_sort(a,low,p-1);
    quick_sort(a,p+1,up);
    }
}
void take_array(int* a)
{

    int i;
    for(i=0;i<size;i++)
    {
        printf("\nEnter the %d th element",i);
        scanf("%d",&a[i]);
    }
}
void display(int* a)
{
    int i;
    for(i=0;i<size;i++)
    {
         printf("%d\t",a[i]);
    }
}
int main()
{
    int a[size];
    int low=0,up=size-1;
    take_array(a);
    printf("\nArray before sorted:\t");
    display(a);
    quick_sort(a,low,up);
    printf("\nArray after sorted:\t");
    display(a);
    return 0;
}
