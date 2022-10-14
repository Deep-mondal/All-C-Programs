#include<stdio.h>
#define size 10
int a[size];
void insertion_sort()
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<=a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
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
int main()
{
    take_array();
    printf("\nArray before sorted:\t");
    display();
    insertion_sort();
    printf("\nArray after sorted:\t");
    display();
    return 0;
}
