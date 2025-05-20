#include<bits/stdc++.h>
using namespace std;
int main() {
   int n; 
   cin >> n;
   int maxsum = 0;
   cout << "Enter the size of the array: " << n << endl;
   vector<int> arr;
   for(int i = 0; i<n; i++){
     int x;
     cin >> x;
     arr.push_back(x);
   }
   int k ;
   cout << "Enter the size of the subarray: " << endl;
   cin >> k;
   int l = 0; int r = k - 1; 
   int sum;
   for(int i = l; i < r; i++){
     sum += arr[i];
   }
   while(r < n-1){
     sum = sum - arr[l];
      l++;
      r++;
     maxsum = max(maxsum,sum);
   }
   
   cout << "The maximum sum of the subarray of size " << k << "is:"  << maxsum << endl;
     

     return 0;
}