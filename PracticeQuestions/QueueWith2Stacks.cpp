#include <bits/stdc++.h>
using namespace std;


int main() {
    stack<int> s1,s2;
    int q;
    cin>>q;
    while(q!=0){
        int operation;
        cin>>operation;
        if(operation==1){
            int i;
            cin>>i;
            s1.push(i);
        }
        else {
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if(!s2.empty()){
                if(operation==2)s2.pop();
                else cout<<s2.top()<<endl;
            }
        } 
        q--;
    }
    
    return 0;
}
