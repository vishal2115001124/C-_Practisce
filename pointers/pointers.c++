#include <iostream>
using namespace std;

int main(){

    //pointers Are buckets to store address

    // int a = 10;
    // int *aptr = &a;

    // cout<<&a<<endl;
    // cout<<aptr<<endl;

    char ch = 'B';
    char *chptr = &ch;
    char a[] = "abcd";
    int arr[] = {1,2,3,4};

    cout<<arr<<endl;

    cout<<a<<endl;
    cout<<(float*)a<<endl;
    cout<<&ch<<endl;
    cout<<chptr<<endl;
    cout<<(int*)chptr<<endl;
    return 0;
}