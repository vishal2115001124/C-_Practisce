#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a[] = {1, 3 , 5 , 7 , 8 ,100};
    int n = sizeof(a)/sizeof(a[0]);

    bool present = binary_search(a,a+n,8);

    if(present){
        cout<<"key Found"<<endl;
    }else{cout<<"key not found"<<endl;}

    return 0;
}
