/*Given an array arr[] of size N, the task is to find the largest element in the given array. 

Example: 

Input: arr[] = {10, 20, 4}
Output: 20

Input : arr[] = {20, 10, 20, 4, 100}
Output : 100
*/
//Solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {20, 10, 20, 4, 100};
    int n = arr[0];
    for (int i=0; i< 4; ++i)
       {
         
        n= max(arr[i+1],n);
         
       }
       cout<< n;
    return 0;
}
