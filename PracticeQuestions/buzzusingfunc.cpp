#include <bits/stdc++.h>
using namespace std;
/*
Program to take input from a user using a function and check if its Buzz number or not
Buzz no. : Ends with 7 and divisible by 7 at the same time
*/
int takeinp(){
 int num;
 cout<<"enter a number: "<< endl;
 cin>> num;
 return num;
}
bool check(int num){
    bool ans;
    if(num%7==0 && num%10==7){
         ans=true;}
    else{
         ans=false;
    }
    return ans;
}

int main(){
    int num;
    num= takeinp();
    bool res;
    res= check(num);
    if(res){
        cout<< "it is buzz number";
    }
    else{
        cout<<"not a buzz number";
    }
    return 0;
}
 
