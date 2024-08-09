#include <stdio.h>
void pw(int element, int capacity, int *profit, int *weight)
{
    double pw[element];
    for (int i = 0; i < element; i++)
        pw[i] = (profit[i] / weight[i]);
    double arr[element];
    for (int i = 0; i < element; i++)
        arr[i] = pw[i];
    bubbleSort(pw, element);
    int index = linearSearch(arr, pw, element, pw[element - 1]);
    int w = capacity - weight[index];
}

int max(int *weight, int element, int w, int index)
{
    for (int i = 0; i < element; i++)
        if (w >= weight[i])
            return 0;
}

int linearSearch(double *arr, double *pw, int element, double value)
{
    for (int i = 0; i < element; i++)
        if (value == arr[i])
            return i;
}

void bubbleSort(double *pw, int element)
{
    double temp;
    for (int i = 0; i < element; i++)
    {
        for (int j = i + 1; j < element; j++)
        {
            if (pw[j] < pw[i])
            {
                temp = pw[i];
                pw[i] = pw[j];
                pw[j] = temp;
            }
        }
    }
}
int main()
{
    int element, capacity;
    printf("\nEnter the number of elements:");
    scanf("%d", &element);
    printf("\nEnter the capacity of the bag:");
    scanf("%d", &capacity);
    int profit[element], weight[capacity];
    for (int i = 0, j = 0; i < element, j < element; i++, j++)
    {
        printf("Enter profit of %d element", i);
        scanf("%d", &profit[i]);
        printf("Enter weight of %d element", j);
        scanf("%d", &weight[j]);
    }
    pw(element, capacity, profit, weight);
}