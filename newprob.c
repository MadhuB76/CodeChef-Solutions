#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void levelprint(int arr[], int n, int start, int end)
{
    int solution[end - start + 1][n];
    memset(solution, 0, sizeof(solution));

    int queue[n];
    int front = 0, rear = -1;
    int lev = 0;

    queue[++rear] = 0;

    while (front <= rear)
    {
        int count = rear - front + 1;
        int i;
        for (i = 0; i < count; i++)
        {
            int node = queue[front++];
            solution[lev - start][i] = arr[node];

            int left_child = 2 * node + 1;
            if (left_child < n)
            {
                queue[++rear] = left_child;
            }

            int right_child = 2 * node + 2;
            if (right_child < n)
            {
                queue[++rear] = right_child;
            }
        }
        lev++;
    }

    int i, j;
    for (i = start; i <= end; i++)
    {
        for (j = 0; j < n && solution[i - start][j] != 0; j++)
        {
            printf("%d ", solution[i - start][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = 2;
    levelprint(arr, n, start, end);
    return 0;
}