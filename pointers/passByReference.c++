#include <iostream>
using namespace std;

void update(int *a){
    *a = *a+1;
}

void print(int *x){
    for(int i=0;i<4;i++){
        cout<<*(x+i)<<" ";
    }
}
int main(){

    int a = 10;
    update(&a);

    // cout<<a<<endl;

    int arr[] = {1,8,10,67};
    // cout<<arr<<"  "<<*arr<<endl;
    // cout<<arr+1<<"  "<<*(arr+1)<<endl;
    // cout<<arr+2<<"  "<<*(arr+2)<<endl;
    // cout<<arr+3<<"  "<<*(arr+3)<<endl;
    print(arr);

    return 0;
}