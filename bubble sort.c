#include<stdio.h>
#define size 5
int a[size];
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
void bubble_sort()
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
}
int main()
{
    take_array();
    printf("\nArray before sorted");
    display();
    bubble_sort();
    printf("\nArray after sorted");
    display();
    return 0;
}
