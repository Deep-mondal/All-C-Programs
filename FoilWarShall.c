#include <stdio.h>
void createGraph(int n, int a[n][n])
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("\nEnter the weight of %dth and %dth vertex:", i, j);
            printf("\n(In case of  infinite put 9999)\n");
            scanf("%d", &a[i][j]);
        }
    }
}
void foilWarShall(int n, int a[n][n])
{
    int i, j;
    int k;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i != j)
                {
                    if (i != k && j != k)
                    {
                        if (a[i][j] < (a[i][k] + a[k][j]))
                        {
                            a[i][j] = a[i][j];
                        }
                        else
                        {
                            a[i][j] = (a[i][k] + a[k][j]);
                        }
                    }
                }
            }
        }
    }
}
void display(int n, int a[n][n])
{
    int i, j;
    printf("\n-----------------------------------\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int size;
    printf("\nEnter the number of vertex");
    scanf("%d", &size);
    int graph[size][size];
    createGraph(size, graph);
    display(size, graph);
    foilWarShall(size, graph);
    display(size, graph);
    return 0;
}