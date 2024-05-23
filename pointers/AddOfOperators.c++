#include <iostream>
using namespace std;

int main(){

    int a = 10;
    float f = 10.11;
    char ch = 'A';

    int arr[] = {1,2,3,4,5};
    cout<<arr<<endl;   //0x7fffffffde40

    char ch_arr[10] = "Hello";
    cout<<ch_arr<<endl; //Hello

    // cout<<a<<"\t";
    // cout<<"Adress :-"<<&a<<endl;
 
    // cout<<f<<"\t";
    // cout<<"Adress :-"<<&f<<endl;

    // cout<<ch<<"\t";
    // cout<<"Adress :-"<<&ch<<endl;

    // o/p:- 10      Adress :-0x7fffffffde5c
    //       10.11   Adress :-0x7fffffffde58
    //       A       Adress :-A��!A
    return 0;
}