#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solve(vector<int> &A)
{
    int N = A.size();
    vector<int> max_prefix_sum(N, 0);
    vector<int> max_suffix_sum(N, 0);
    int prefix_sum = 0;
    for (int i = 0; i < N; i++)
    {
        prefix_sum += A[i];
        max_prefix_sum[i] = max(max_prefix_sum[max(0, i - 1)], prefix_sum);
        prefix_sum = max(prefix_sum, 0);
    }
    int suffix_sum = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        suffix_sum += A[i];
        max_suffix_sum[i] = max(max_suffix_sum[min(N - 1, i + 1)], suffix_sum);
        suffix_sum = max(suffix_sum, 0);
    }
    int max_sum = 0;
    for (int i = 1; i < N - 1; i++)
    {
        int max_prefix = max_prefix_sum[i - 1];
        int max_suffix = max_suffix_sum[i + 1];
        int middle_sum = 0;
        int max_middle_sum = 0;
        for (int j = i; j >= 0; j--)
        {
            middle_sum += A[j];
            max_middle_sum = max(max_middle_sum, middle_sum - max_prefix_sum[j]);
        }
        middle_sum = 0;
        for (int k = i; k < N; k++)
        {
            middle_sum += A[k];
            max_middle_sum = max(max_middle_sum, middle_sum - max_suffix_sum[k]);
        }
        int current_sum = max_prefix + max_middle_sum + max_suffix;
        max_sum = max(max_sum, current_sum);
    }
    return max_sum % MOD;
}
int main()
{
    vector<int> A = {-6, -3, 1, -4, 5, 2};
    int result = solve(A);
    cout << result << endl;
    return 0;
}
