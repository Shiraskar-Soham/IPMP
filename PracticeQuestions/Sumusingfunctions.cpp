#include <bits/stdc++.h>
using namespace std;
/*
Program to take input from a user using a function and also print the sum using different function
*/
int takingip (){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    return num;
}

void print (int n1, int n2){
    cout<<n1+n2;
}
 int main(){
     int a,b;
     a=takingip();
     b=takingip();
     print(a,b);
     return 0;
 }
