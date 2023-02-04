#include<bits/stdc++.h>
using namespace std;
int pwr(int num, int pw){
    if (pw==0){
        return 1;
    }
    return num * pwr(num,(pw-1));
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
