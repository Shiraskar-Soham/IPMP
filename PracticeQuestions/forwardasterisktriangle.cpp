/*forward asterisk triangle*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"enter a number: ";
   cin>>n;
   for (int i=0;i<=n;i++){
       for (int j=i; j>0; j--){
        cout<<"* ";
        }
       cout<<endl;
   }
   
}
