#include<bits/stdc++.h>
using namespace std;
// this is the brute approach for the problem .
int main () {
     vector<int> vec;
     int n;
     int val;
      cin>> n;
      int p = n/2;
       cout << endl;
       for(int i = 0; i<n; i++) {
            cin >> val;
            vec.push_back(val);
       }
       for(int j= 0; j<n; j++)
       {
         int count = 0;
         for(int k = j; k<n; k++) {
             if(vec[k]==vec[j]){
                 count = count + 1;
             }
         }
         if(count  > p) {
            cout << "The majority element is" << endl << vec[j];
         }
       }

     return 0 ;
      
}