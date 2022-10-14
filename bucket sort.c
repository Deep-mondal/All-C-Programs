#include<stdio.h>
#define size 5
int a[size];
int get_max()
{
    int i;
    int max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
         max=a[i];
    }
    return max;
}
void take_array()
{

    int i;
    for(i=0;i<size;i++)
    {
        printf("\nEnter the %d th element",i);
        scanf("%d",&a[i]);
    }
}
void display()
{
    int i;
    for(i=0;i<size;i++)
    {
         printf("%d\t",a[i]);
    }
}
void bucket_sort()
{
    int i,j;
    int max;
    max= get_max();
    int bucket[max];
    for(i=0;i<=max;i++)
    {
        bucket[i]=0;
    }
    for(i=0;i<size;i++)
    {
        bucket[a[i]]++;
    }
    for(i=0,j=0;i<=max;i++)
    {
        while(bucket[i]>0)
        {
            a[j++]=i;
            bucket[i]--;
        }
    }
}
int main()
{
    take_array();
    //max();
    printf("\nArray before sorted\t");
    display();
    bucket_sort();
    printf("\nArray after sorted\t");
    display();
    return 0;
}
