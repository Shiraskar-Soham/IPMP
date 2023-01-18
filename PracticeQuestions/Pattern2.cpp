/*
       *
     * * *
   * * * * *
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>> n;
    for(int i=n; i>=0;i--){
        for (int k=1; k<=i; k++){
                cout<<"  ";
        }
        for(int j=1; j<=2*(n-i)-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
