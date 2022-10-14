#include<stdio.h>
#include<stdlib.h>
#define size 5
void b_search(int x,int beg,int end,int *a)
{
    int mid;
    mid=(beg+end)/2;
    if(x==a[mid])
    printf("\nData found");
    else if(x<a[mid])
    {
        b_search(x,0,mid-1,a);
    }
    else if(x>a[mid]){
        b_search(x,(mid+1),(size-1),a);
    }
    else 
    {
        printf("\nData not found");
    }

}
int main()
{
    int i,a[size],s;
    printf("\nEnter the array Elements");
    for(i=0;i<size;i++)
    {
        printf("\n\tgive value");
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be serarched");
    scanf("%d",&s);
    b_search(s,0,(size-1),a);
    return 0;
}