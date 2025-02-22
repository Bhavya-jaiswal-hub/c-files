#include<bits/stdc++.h>
using namespace std;
int main() {
     vector<int> nums;
     int n;
     cout << endl;
     cin >> n;
     int val;
     int cnt0 = 0;
     int cnt1 = 0; 
     int cnt2 = 0;
     for(int i =0;i<n; i++){
         cin>> val;
         nums.push_back(val);
     }
     for(int j = 0; j < n; j++) {
         if(nums[j] == 0){
             cnt0 = cnt0 + 1;
         }
         if(nums[j] == 1) {
             cnt1 = cnt1 + 1;

         }
          if(nums[j] == 2) {
             cnt2 = cnt2 + 1;
          }
     }
     for(int k = 0; k < cnt0; k++) {
         nums[k] = 0;
     }
     for(int l = cnt0; l < (cnt0 + cnt1); l++) {
         nums[l] = 1;
     }
     for( int m = (cnt0 + cnt1); m < n; m++) {
         nums[m] = 2;
     } 
     for(vector<int>:: iterator it = nums.begin(); it != nums.end(); it++) {
         cout<< *it <<" " ;
     }
      


     return 0;
}