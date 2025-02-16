#include<bits/stdc++.h>
using namespace std;
 int main () {
         int n;
         int k;
         int num; 
         int len = 0;
       vector<int> nums;
        cin >> n ;
         cout << endl;
          cin>> k ;
           cout << endl;
           for(int i= 0 ; i < n; i++) {
               cin >> num;
               nums.push_back(num);
             
           }
       for(int i=0; i<n; i++) {
         for(int j =i; j< n; j++){
             int sum = 0;
              for (k = i; k< j ; k++) {
                    sum = sum + nums[k];
                    if(sum == k) {
                         len = max(len,j - i +1);
                    }
              }
         }
       }
    cout << "The maximum subarrray is " ;
    cout << endl ;
     cout << len ;


    return 0;
 }