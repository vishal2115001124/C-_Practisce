#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int* y= &x;

    cout<<&x<<"  "<<&x+1<<endl;
    cout<<y<<"  "<<y+1<<endl;
    //0x7fffffffde5c  0x7fffffffde60
    //0x7fffffffde5c  0x7fffffffde60
    cout<<&y<<"  "<<*y+1<<endl;
    //0x7fffffffde50  11
    cout<<*(&x)<<"  "<<*(&y)<<endl;
    //10  0x7fffffffde5c
    cout<<&(*y)<<endl;
    //0x7fffffffde5c


    return 0;
}