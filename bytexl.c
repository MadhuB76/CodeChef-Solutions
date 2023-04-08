#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t); // input number of test cases
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k); // input array size and number of operations
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]); // input array elements
        }

        int count = 0;
        for (int i = 0; i < (1 << n); i++)
        {
            int temp[n];
            for (int j = 0; j < n; j++)
            {
                temp[j] = arr[j];
            }
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    temp[j] = -temp[j];
                }
            }
            int neg_count = 0;
            for (int j = 0; j < n; j++)
            {
                if (temp[j] < 0)
                {
                    neg_count++;
                }
            }
            if ((k - neg_count) % 2 == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
