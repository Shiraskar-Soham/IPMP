#include<bits/stdc++.h>
using namespace std;
    int a[128];
    int i=0;
void bin(int n){

    if(n==0) a[i]=0;
    else if(n==1) a[i]=1;
    else{
        a[i]=n%2;
        i++;
        bin(n/2);
    }
}

int main (){
    int n;
    cout<<"enter a number";
    cin>>n;
    
    bin(n);
    
    while(i>=0){
        cout<<a[i--];
}
return 0;
}
