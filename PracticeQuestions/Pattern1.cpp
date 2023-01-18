/*
* * * *
  * * *
    * *
      *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>> n;
    for(int i=n; i>=1;i--){
        for (int j=n-i-1; j>=0;j--){
                cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
