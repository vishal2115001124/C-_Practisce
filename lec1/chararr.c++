#include <iostream>   
#include <cstring>  
using namespace std;

void readLine(char a[],char delimitter){
    int i=0;
    char ch=cin.get();

    while(ch != delimitter){
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
}

int main(){

    // char a[] = {'V','I','S','H','A','L'};
    // cout<<a<<endl;

    // char b[10] ;
    // b[0] = 'a';
    // b[1] = 'b';
    // cout<<b<<endl;

    // char c[10] ;
    // c[0] = 'l';
    // c[1] = 'm';
    // c[2] = '\0'; //null
    // cout<<c<<endl;

    // char a[100] = "hello world";

    // cout<<a<<endl;

    // for(int i=0;a[i]!=0;i++){
    //     cout<<a[i]<<" ";
    // }

    char a[100] ;

    // readLine(a,'\n');

    cin.getline(a,100,'$'); //HERE $ is delimitter

    cout<<a<<endl;

    cout<< strlen(a)<<endl;

    // for(int i=0;a[i]!=0;i++){
    //     cout<<a[i]<<" ";
    // }
    return 0;
} 