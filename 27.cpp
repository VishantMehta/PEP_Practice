// Map , frequency array
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Method 1 -> By brute force

    // vector<int> input = {1, 2, 3, 1, 3, 2, 1, 2, 1, 1, 1};
    // int size = input.size();
    // int count = 0;
    // int ans = input[0];
    // for (int i = 0; i < size; i++)
    // {
    //     int count1 = 0;
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (input[i] == input[j])
    //         {
    //             count1++;
    //         }
    //     }
    //     if (count1 > count)
    //     {
    //         count = count1;
    //         ans = input[i];
    //     }
    // }
    // cout << ans << endl;

    // Method 2-> Frequency Array (study it , it will be also taught on 30 in a ques)

    // vector<int> input = {1, 2, 3, 1, 3, 2, 1, 2, 1, 1, 1};

    // int max = *max_element(input.begin(), input.end());
    // vector<int> arr(max + 1, 0);
    // for (int num : input)
    // {
    //     if (num >= 0 && num <= max)
    //     {
    //         arr[num]++;
    //     }
    // }
    // int ans = INT_MIN;
    // int index = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (ans < arr[i])
    //     {
    //         ans = arr[i];
    //         index = i;
    //     }
    // }
    // cout << index << endl;

    // Method 3-> Map
    // What is Map
    //  Map hota kya hai ye ek data type h jisme key value pair store hote hai
    //  Ye ham mostly tb use krte hai jab hame time order of 1 me chahie hota hai
    unordered_map<string, int> map;
    map["mayank"] = 2;
    map["rahul"] = 1;
    map["siya"] = 3;
    map["rahul"] = 4; // isme kya hogi rahul pele se hai , ye naya rahul ni bnaega bas ye pele check krega ki pele se hai ya ni map me uske baad agar hai to update krdega nayi value se
    cout << map["rahul"] << endl;
    for (auto it : map)
    {
        cout << it.first << " " << it.second << endl; // .first for key and .second for value
    }
    // to check if a key is present or not , in this true will be returned if yes and false if not
    if (map.find("rahul") != map.end()) // yaha pe map.end() islie use kra kyoki vo iterator ka work karta hai or last tk leke jata hai taki last tk search kr ske.
    {
        cout << map["rahul"] << endl;
    }

    vector<int> arr = {1, 2, 1, 1, 2, 3, 4, 5, 6};
    unordered_map<int, int> map1;
    for (int i = 0; i < arr.size(); i++)
    {
        map1[arr[i]]++;
    }
    for (auto it : map1)
    {
        cout << it.first << " came " << it.second << " times" << endl;
    }
    return 0;
}