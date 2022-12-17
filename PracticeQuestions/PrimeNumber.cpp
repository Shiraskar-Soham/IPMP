#include <bits/stdc++.h>
using namespace std;
int main (){
    int num ;
    cout<<"Enter a number:";
    cin >> num;
    // now checking if prime
    bool ans=true;
    if (num<=0){
       cout<< "it is negative number";
    }
    if (num==1 || num==0){
        cout<< "It is not prime";
    }
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            ans=false;
            break;
        }
    ans=true;
    }
    if(ans){
        cout<< "It is Prime";
    }
    else {
        cout<<"It is NOT Prime";
    }
    
return 0;
}
