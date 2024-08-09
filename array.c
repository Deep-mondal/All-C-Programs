#include <stdio.h>
#define size 5
int print(int *a)
{
    /* for (int i = 0; i < size; i++)
     {
         a[i] = 1;
     }*/
    return *a;
}
int main()
{
    int a[size];
    /*for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }*/
    printf("%d\t", *a);
    int p = print(a);
    printf("%d", p);
    return 0;
}