#include "stdio.h"
int main()
{
    int size, source, sink, ch;
    printf("\nEnter the number of Vertex");
    scanf("%d", &size);
    int graph[size][size];
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            graph[i][j] = 0;
        }
    }
    printf("\nEnter the edges...........");
    do
    {
        printf("\nSource:");
        scanf("%d", &source);
        printf("\nSink:");
        scanf("%d", &sink);
        if (source < 0 && sink < 0)
            printf("vertex does not exist!!");
        else if (graph[source][sink] != 0)
            printf("Edge Already Exist");
        else
            graph[source][sink] = 1;
        printf("\nDo you want to insert another edge?\n");
        scanf("%d", &ch);
    } while (ch == 1);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            printf("%d", graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}