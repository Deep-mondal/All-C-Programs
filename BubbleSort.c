#include <stdio.h>
void bubbleSort(int n, int *a)
{
}
void getInput(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d th item: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void display(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    int size;
    printf("\nEnter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    getInput(size, arr);
}