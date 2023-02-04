#include<bits/stdc++.h>
using namespace std;
int pwr(int num, int pw){
    int ans=1;
    for(int i=1; i<=pw; ++i){
        ans*=num;
    }
    return ans;
}
int main(){
    int num,pw;
    cout<< "enter base number -";
    cin>>num;
    cout<<"enter power- ";
    cin>>pw;

    cout<< pwr(num, pw);
    return 0;
}
