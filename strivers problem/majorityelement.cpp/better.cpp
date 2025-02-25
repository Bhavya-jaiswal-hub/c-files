#include<bits/stdc++.h>
using namespace std;
 int main () {
     vector<int> vec;
     map<int,int> mpp;
     int val;
     int n;
     cin>> n;
     cout << endl;
     for(int i = 0; i<n; i++) {
         cin >> val;
         vec.push_back(val);
     }
      for(int j = 0; j< n; j++) {
         mpp[vec[j]]++;
      }

      for(auto it: mpp) {
         if(it.second > n/2 ){
             cout << "The majority element is " << endl << it.first;
         }
      }


     return 0;
 }