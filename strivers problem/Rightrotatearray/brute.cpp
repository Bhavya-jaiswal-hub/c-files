#include<bits/stdc++.h>
using namespace std;
int main() {
     int n,k;
     cin>> n;
     cout<< endl;
     cin>> k;
     cout << endl;
     vector<int> vec;
     int val;
     for(int i = 0; i<n; i++) {
         cin>> val;
         vec.push_back(val);
     }
     vector<int> container;
     for(int j = k+1; j<n; j++) {
         container.push_back(vec[j]);
     }
     
     for(int m = k; m<n; m++) {
         vec[m] = vec[m-k];
     }
    
     for(int p= 0; p<k; p++) {
         vec[p] = container[p];
     }

    for(int r = 0; r<n; r++) { 
        cout << vec[r] << " " ;
    }

     return 0;
}