/*Question
Given an array of integers, find sum of its elements.
Examples : 

Input : arr[] = {1, 2, 3}
Output : 6
Explanation: 1 + 2 + 3 = 6

Input : arr[] = {15, 12, 13, 10}
Output : 50*/
//solution-->
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
   int arr[] = {1, 2, 3};
   for (int i = 0; i<3; ++i)
   {
       int n=arr[i];
       sum+= n;
   }
 cout<< "value = "<<sum<<endl;

    return 0;
}
