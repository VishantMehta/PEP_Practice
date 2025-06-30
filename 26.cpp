#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    // // Char array
    // // for char array  '/0' null character must be at the end of character array
    // char arr[] = {'a', 'b', 'c', 'd', '\0'};
    // cout << arr; // directly we can print it , it willl print till it gets null bcoz of the nature of cout
    // char arr1[100];
    // cin >> arr1; // it will take input till it gets the space (end of word ) then it'll automatically put null char there
    // // so to take a full sentence as input of ch array we need to use getline
    // cin.getline(arr1, 100); // 100 is limit , but we can put of any size below 100 it'll automatically put null there

    // // String
    // //  main difference is string is dynamic and char array is fixed and other is functionalities are different
    // string a;
    // getline(cin, a); // to take input
    // cout << a;
    // // string have many functions
    // // we should know how to do by ascii operations and other methods

    // // length of char array
    // char arr2[] = {'a', 'b', 'c', 'd', '\0'};
    // int count = 0;
    // for (int i = 0; arr[i] != '0'; i++)
    // {
    //     count++;
    // }
    // cout << "Length of char array is " << endl;
    // // Convert all characters into uppercase
    // for (int i = 0; arr[i] != '0'; i++)
    // {
    //     arr[i]-=32;
    // }
    // Check if it is pallindrome
    // bool flag = true;
    // char arr3[] = {'n', 'a', 'm', 'a', 'n'};
    // int count = 5;

    // for (int i = 0; i < count / 2; i++)
    // {
    //     if (arr3[i] != arr3[count - 1 - i])
    //     {
    //         flag = false;
    //         break;
    //     }
    // }

    // if (flag)
    // {
    //     cout << "A Palindrome";
    // }
    // else
    // {
    //     cout << "Not a Palindrome";
    // }

    // // do these queestion with string also
    // // practice string in cpp to get used to

    // 2d Array
    // int arr[3][3];
    // 2d array is also stored in continuous memory allocation , basically array in array (each index has another array)
    //  basically kind of matrix , isme jo rows hoti h vo hoti h int arr[]<-- [] , ye wali and bad wala column , matlab pele rows access fir uske andar column  , basically matrix me hame dikhti horizontal hai but ye hoti vertical hai rows and same with column ki dikhte vertical hai but hote horizonta
    //       0   1   2 <-- Columns
    //   0   1   2   3
    //   1   4   5   6
    //   2   7   8   9
    //  Rows
    // isme 7 ko access krne e lie arr[2][0] hojega

    // operations
    int n, m;
    cout << "Enter Row and Column : ";
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 != 0)
            {
                cout << arr[m - 1 - j][i] << " ";
            }
            else
            {
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // question find sum of every row and every column , compare them and find max , provide column sum with column number and same if row.
    int maxsum = 0, maxindex = 0;
    string flag;
    for (int i = 0; i < n; i++)
    {
        int rc = 0, cc = 0;
        for (int j = 0; j < m; j++)
        {
            rc += arr[i][j];
            cc += arr[j][i];
        }
        int maxsum1;
        // int maxsum1 = max(rc, cc);
        if (rc > cc)
        {
            maxsum1 = rc;
            flag = "Row";
        }
        else
        {
            maxsum1 = cc;
            flag = "Column";
        }
        if (maxsum1 > maxsum)
        {
            maxsum = maxsum1;
            maxindex = i;
        }
    }
    cout << "Maximum sum is : " << maxsum << " and It is " << flag << " Whose Index is : " << maxindex;
    cout << endl;
}