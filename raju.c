#include <stdio.h>

int count_arrays(int arr[], int N, int K)
{
    if (K % 2 == 0)
    {
        return 1;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            arr[i] *= -1;
            count += count_arrays(arr, N, K - 1);
            arr[i] *= -1;
        }
        return count;
    }
}

int main()
{
    int T; // number of test cases
    scanf("%d", &T);
    while (T--)
    {
        int N, K; // size of array and number of operations
        scanf("%d %d", &N, &K);
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", count_arrays(arr, N, K));
    }
    return 0;
}