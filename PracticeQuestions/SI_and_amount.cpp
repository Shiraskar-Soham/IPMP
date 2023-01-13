/*take input from user of principle rate and time. prin simple interest and amount*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    double p, r, t ;
    cout<<"entyer the principal, rate and time respectively-";
    cin>> p>> r>> t;
    double i= p*r*t/100.0;
    double a=p+i;
    cout<<"Amount is-" << a <<endl<< "SI is-" << i;
    return 0;
}
