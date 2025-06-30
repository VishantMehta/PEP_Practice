// sliding window optimized
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 2, 1};
    int k = 3;
    int n = 5;
    int sum = 0, j = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (i - j + 1 == k)
        {
            ans = max(ans, sum);
            sum -= arr[j];
            j++;
        }
    }
    cout << ans;
    return 0;
}