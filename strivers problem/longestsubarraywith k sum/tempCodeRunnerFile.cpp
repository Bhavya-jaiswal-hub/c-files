#include<bits/stdc++.h>
 using  namespace std;
  int  main () {
    int n;
    int p;
    int num;
    int len = 0 ;
    cin >> n ;
    cout << endl;
     cin >> p;
     cout  << endl;
     vector<int> nums;
      for(int i =0; i< n; i++) {
        cin >> num;
         nums.push_back(num);
      } 
      for(int j = 0; j < n ; j++) {
        int sum = 0;
         for(int k = j; k<n ; k++) {
             sum = sum + nums[k];
             if (sum == p) {
                 len = max(len,k - j +1);
             }
         }
      }
       cout << "The max length of sub array is ";
        cout << endl;
         cout << len;

     return 0;

  }