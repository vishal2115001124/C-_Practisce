#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a[] = {10 , 20 , 30 ,40 , 40 , 40 , 50};
    int n = sizeof(a)/sizeof(a[0]);

    int *ans = lower_bound(a,a+n,40); // first occurence
    // int *ans = lower_bound(a,a+n,45);
    cout<<"value: "<< *ans <<endl;
    cout<<"Indx: "<< ans - a<<endl;

    int *an= upper_bound(a,a+n,40); // last occurence
    cout<<"value: "<< *an <<endl;
    cout<<"Indx: "<< an - a -1<<endl;

    cout<<"No. of Ocuurences :- "<< an-ans<<endl;
    return 0;
}