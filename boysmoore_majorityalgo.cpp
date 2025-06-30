// boyer-moore majority algo
// how to get element which is repeating most  ,in it we'll get the ele with the freq more than n/2 (important)
// isme basically count ham maintain nahi kr re h but cancel out kar re h bar bar , smjhne ke lie inp=[2,2,1,1,1,2,2] out=2 ko dry run kro
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int count = 0, ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
        {
            ans = arr[i];
            count = 1;
        }
        else if (ans = arr[i])
            count++;
        else
            count--;
    }
    cout << "Majority element" << ans;
    return 0;
}