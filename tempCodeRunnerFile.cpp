
#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    const int n = 100000000; // 100 million elements
    vector<int> arr(n);

    // Fill array from 1 to n
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    int target = n; // Worst case: last element

    auto start = chrono::high_resolution_clock::now();

    int result = linearSearch(arr, target);

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Time taken for linear search: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
