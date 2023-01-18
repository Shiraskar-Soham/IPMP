/*
                1
              2 3 2
            3 4 5 4 3
          4 5 6 7 6 5 4
        5 6 7 8 9 8 7 6 5
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-i ;j++){
            cout<<"  ";
        }
        for (int k=i; k<=2*i-1; k++){
            cout<<k<<" ";
        }
        for (int l=2*(i-1); l>=i; l-- ){
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
