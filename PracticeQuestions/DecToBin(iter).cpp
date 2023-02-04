#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<< "enter a decimal number";
    cin>>a;
    int arr[32];
    int i=0;
    while(a>=1){
        arr[i]=a%2;
        a=a/2;
        ++i;
    }
    while(i>=1){
        cout<<arr[i-1];
        i--;
    }
    return 0;
}
