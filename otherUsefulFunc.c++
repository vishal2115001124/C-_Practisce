#include <iostream>
#include <algorithm>

using namespace std;

void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<< a[i] << " ";
    }
    cout<<endl;
}

int main(){

    // int a[] = {10 , 20 , 30 , 40 , 50 , 60};
    // int n = sizeof(a)/sizeof(a[0]);

    // print(a,n);
    // rotate(a,a+3,a+n);
    // print(a,n);
    // reverse(a,a+n);
    // print(a,n);

    int a = 10 , b = 20 , c = 5 ;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<min(a,b)<<endl;
    cout<<min(a,min(b,c))<<endl;

    return 0;
}