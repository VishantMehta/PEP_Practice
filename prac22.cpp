// 23-Jun :-
// Sum of array
// Find largest number in array
// Find 2nd largest number in array
// rotate an array towards left by 1 , input = 1 2 3 4 5 ,output = 2 3 4 5 1
// linear search/bnary search , input = 10 20 30 40  T=30, output =2
// sort 0 1 without using sorting algo , input = 0 1 0 1 0 1 , output = 0 0 0 1 1 1 (all input arrays)
// find unique number , input = 1 2 1 3 3 , output =2
// find duplicate in an array

// print all subarray
// max sum of subarray
//  find kth largest number in array
// leetcode 31
// rotate an array towards left by k
//  input = 1 2 3 4 5 k=3 , output = 4 5 1 2 3
//  leetcode 33
//  leetcode 875
//  leetcode 74
// find all unique number
// input = 0 1 2 0 1 , output =2 4
// remove all duplicates in an array

// 1st
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = '\0';
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    // for(int i=n-1;i<0;i++){
    //     sum+=a[i];
    // }
    // int i=0;
    // while(i!=n){
    //     sum+=a[i];
    //     i++;
    // }

    cout << sum;
}

// 2nd
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = '\0';
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}

// 3rd
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int max = a[0];
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = '\0';
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}

// 4th
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = '\0';
    int rt = 1;
    int ans[n];
    for (int i = rt; i < n - 1; i++)
    {
        ans[i] = a[i];
    }
    ans[n - 1] = a[n];
}

// 5th
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key = 30;
    int left = 0;
    int right = n - 1;
    int ans = 0;
    while (left < right)
    {
        int mid = (left + right);
        if (a[mid] > key)
        {
            left = mid + 1;
        }
        else if (a[mid] < key)
        {
            right = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << ans;
}

// 6th
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = '\0';
    int cnt0 = 0;
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] == 0 ? cnt0++ : cnt1++;
    }
}

// 7th
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = '\0';
    for (int i = 0; i < n; i++)
    {
    }
}
