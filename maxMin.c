#include <stdio.h>
int max, min;
void maxMin(int initial, int sizeDemo, int *arrDemo)
{
    int maxDemo, minDemo, mid;

    if (sizeDemo == initial)
    {
        min = arrDemo[initial];
        max = arrDemo[initial];
    }
    else if (sizeDemo == initial + 1)
    {
        if (arrDemo[initial] > arrDemo[sizeDemo])
        {
            max = arrDemo[initial];
            min = arrDemo[sizeDemo];
        }
        else
        {
            min = arrDemo[initial];
            max = arrDemo[sizeDemo];
        }
    }
    else
    {
        mid = (sizeDemo + initial) / 2;
        maxMin(0, mid, arrDemo);
        maxDemo = max;
        minDemo = min;
        maxMin(mid + 1, sizeDemo, arrDemo);
        if (maxDemo > max)
            max = maxDemo;
        if (minDemo < min)
            min = minDemo;
    }
}
int main()
{
    int sizeArr, i;
    printf("\nEnter the size of the array:");
    scanf("%d", &sizeArr);
    if (sizeArr <= 0)
    {
        printf("\nEnter a valid entry for array size(atleast>0)");
        return 0;
    }
    int arr[sizeArr];
    for (i = 0; i < sizeArr; i++)
    {
        printf("Enter the %d th element", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    printf("\nArray is:");
    for (i = 0; i < sizeArr; i++)
    {
        printf(" %d\t", arr[i]);
    }
    maxMin(0, sizeArr, arr);
    printf("\nMax:%d", max);
    printf("\nMin:%d", min);
    return 0;
}