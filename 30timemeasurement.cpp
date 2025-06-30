// thhis is advanced c++ written to explain how time complexity works , understand it (required in high level companies)
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
    int n = 1000000; // Array size
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    int target = n; // Element to search (worst-case)

    auto start = chrono::high_resolution_clock::now();

    int result = linearSearch(arr, target);

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    cout << "Time taken by linear search: " << duration.count() << " nanoseconds" << endl;

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <chrono>
// using namespace std;

// int linearSearch(const vector<int> &arr, int target)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == target)
//             return i;
//     }
//     return -1;
// }

// int main()
// {
//     const int n = 100000000; // 100 million elements
//     vector<int> arr(n);

//     // Fill array from 1 to n
//     for (int i = 0; i < n; i++)
//         arr[i] = i + 1;

//     int target = n; // Worst case: last element

//     auto start = chrono::high_resolution_clock::now();

//     int result = linearSearch(arr, target);

//     auto end = chrono::high_resolution_clock::now();
//     auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

//     if (result != -1)
//         cout << "Element found at index: " << result << endl;
//     else
//         cout << "Element not found" << endl;

//     cout << "Time taken for linear search: " << duration.count() << " nanoseconds" << endl;

//     return 0;
// }

// import java.util.Arrays;

// public
// class LinearSearchLarge
// {
// public
//     static int linearSearch(int[] arr, int target)
//     {
//         for (int i = 0; i < arr.length; i++)
//         {
//             if (arr[i] == target)
//                 return i;
//         }
//         return -1;
//     }

// public
//     static void main(String[] args)
//     {
//         final int n = 100_000_000; // 100 million elements
//         int[] arr = new int[n];

//         // Fill array from 1 to n
//         for (int i = 0; i < n; i++)
//             arr[i] = i + 1;

//         int target = n; // Worst case

//         long start = System.nanoTime();

//         int result = linearSearch(arr, target);

//         long end = System.nanoTime();
//         long duration = end - start;

//         if (result != -1)
//             System.out.println("Element found at index: " + result);
//         else
//             System.out.println("Element not found");

//         System.out.println("Time taken for linear search: " + duration + " nanoseconds");
//     }
// }
