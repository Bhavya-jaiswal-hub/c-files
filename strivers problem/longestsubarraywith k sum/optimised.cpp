#include<bits/stdc++.h>
using namespace std;
 int main () {
   
      int n;
      int k;
      int val;
      int len;
       cin >> n;
       cout << endl;
       cin >> k;
       cout << endl;
       vector<int> nums;
       for(int i =0; i< n; i++) {
         cin >> val;
         nums.push_back(val);
       }
       
       map<int ,int > mpp;
         int sum = 0;
          int maxlen = 0;
          for( int j =0 ; j< nums.size(); j++) {
               sum = sum + nums[j];
               if (sum == k) {
                 maxlen = max(maxlen, j+1);
               }
              int rem = sum - k;
               if(mpp.find(rem) != mpp.end()) {
                 int len = j - mpp[rem];
                 maxlen = max(maxlen,len);
               }
               if(mpp.find(sum) == mpp.end()) {
                 mpp[sum] = j;
               }

          }
          cout << "The maximum subarray is ";
           cout << endl ;
            cout << maxlen;
       return 0 ;
 }