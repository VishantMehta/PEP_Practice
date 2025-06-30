// int arr[]={3,4,7,5,6};
// int k=3;
// find max sum of subarray with given size of subarray will be k
// //explanation
// 3+4+7=14
// 4+7+5=16
// 7+5+6=18

// output =18

// study what is subarray
#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {3, 4, 7, 5, 6};
    int k = 3; //
    int maxsum = INT_MIN;
    // int sum = 0;
    for (int i = 0; i <= n - k; i++) // ye n-k islie lia kyoki ye loop define krta hai ki starting point kon kon hoga (subarrays ka)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
        }
        maxsum = max(maxsum, sum);
    }
    cout << "ans = " << maxsum << endl;
}
// or use this loop(inner) will give same answer
//  for (int j = i; j < i+k; j++)
//  {
//      sum += arr[j];
//  }