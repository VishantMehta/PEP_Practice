#include <iostream>
using namespace std;
// Pointer -> that stores address of already created variable
int main()
{
    int x = 10;
    int *y;
    y = &x;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "ptr = " << y << endl;
    cout << "*ptr = " << *y << endl;
    cout << "Size of ptr = " << sizeof(y) << endl;
    // pointer syntax-> datatype varname
    // sare pointers ka size
    // datatype kyo likhege -> kyoki vhi bta ra hoga compiler ko kis form me read krna hai and kitne byte read krne hai
    //  ptr ek address hai and *ptr defrefernce krta hai , us se vo jo address store hai uski value access krega
    (*y)++; // bracket used due to precedence
    // ye kya krega deference krke isme jo store h uski value me increment hoga
    cout << x << endl;

    // when we provide "&" it provite address of 1st byte only -> is concept pe puri array based hai
    // refrence variable
    //  it is different from pointer , ye kya karega ...
    int z = 10;
    int *ptr = &z; // pointer
    int w = z;
    int &k = z; // reference variable
    k++;
    cout << z << endl; // isme bhi increment hoga k pe krne se (k is refrence variable of z)

    char ch = 'Z';
    char *ptr1 = &ch;
    cout << "ch = " << ch << endl;
    cout << "&ch = " << &ch << endl;
    cout << "ptr = " << ptr1 << endl;
    cout << "*ptr = " << *ptr1 << endl;
    // in this way we can't print address of character this is bcoz of nature of cout as it reads till it gets null for character pointer , so it going again and again reading Z (ch values) so giving garbage values , so specially in C++ , in char array we have to put last character as null

    int x1 = 10;
    int y1 = x1++;
    cout << y1 << endl; // 10 hi store hoga isme as post increment(x++) used h to pele assign hoga and then increment , but if we use preincrement pele increment fir assign

    // what can be output of x=x++;
    int x2 = 10;
    x2 = x2++;
    cout << x2 << endl; // same 10 will be output , why -> bcoz it cancels out value that is incremented (as postincre hai to compiler kar lega ki value 10 hi assign karega , fir x ko incre karega chahe incre krne ke baad value badi ho par compiler use cancel out karke 10 hi krega as ye rule hai , read out more aboout this..)

    // c++ me index 0 se hi kyo start hua , it is bcoz of pointer arithmetic , read out more
    // array me continuos allocation kese hai , uska jawab bhi pointer se dege

    int x3 = 10;
    x3++;
    int *ptr3 = &x;
    // before increment
    cout << ptr3 << endl;
    ptr3++;
    // after increment
    cout << ptr3 << endl;
    // yaha pe 4 plus hoga address me as int 4 byte ka hota h and jo & hai usne x ka address dia,or & hame sirf 1st byte ka addr deta h and ham jab incre krege usme 1 to vo next byte pe jaega , as vo int h to 4 plus hoga
    //  to agar 100 hoga before ka addr tha , to incre krege to 104 hoga as next pe jaege to jo value 100 me store thi (chahe 100 1st byte ka addr ho par uske andar jo value hai vo to 4 byte me stored hai (as it's integer) thats why increment krne pe next pe jaega and 104 will be the answer , same will happen in case of double -> double me 8 incre hoga agar pele 100 tha to 108 , depending on datatype)

    // read out difference between passing variable in function both as a value and as refrence ,also try out/practice pointers in that to clear concepts

    // Revise Pointer Arithmetic

    // Array
    // Collection of similar data which is stored in continuous memory allocation which has a fixed size
    int arr[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << sizeof(arr) << endl;
    cout << "arr[0]" << arr[0] << endl;
    cout << "arr= " << arr << endl;     // ye and niche wali line same output dege , this is 1st difference between array and pointer
    cout << "arr= " << &arr[0] << endl; // ye

    cout << arr[1] << endl; // ye and niche wala same valur dege , this is 2nd difference
    cout << *(arr + 1) << endl;
    // yaha pe pointer hamesha array ke 1st ele ko point krta h to usme plus krege to next ele pe jaega
    // IMP-> study about it and pointer relation

    // how to pass it in function
    //  void func(int arr[],int n){} //this method never passes the full array
    //      for(int i=0;i<n;i++){
    //          cout<<arr[i];
    //      }
    //}
    //  int main(){
    //      arr[3]={10,20,30}
    //      func(arr);
    //    }

    //  void func(int *arr,int n){} //this method passes the full array
    //      for(int i=0;i<n;i++){
    //          cout<<(*arr)[i];
    //      }
    //}
    //  int main(){
    //      arr[3]={10,20,30}
    //      func(arr);
    //    }
    return 0;
}
