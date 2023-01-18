/*1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=i; j<i+5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
