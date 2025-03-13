#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   int val;
   vector<int> arr;
   cin>> n;
   cout << endl;
   for(int i = 0; i<n; i++) {
   cin>> val;
   arr.push_back(val);
   }
   vector<int> pos;
   vector<int> neg;
   for( int j = 0; j<n; j++){
     if(arr[j] >=0){
         pos.push_back(arr[j]);

     }
     else {
         neg.push_back(arr[j]);
     }
   }
   for(int k = 0; k< n/2; k++) {
     arr[2*k]  =  pos[k];
     arr[2*k + 1] = neg[k];
   }
   
   for(vector<int>:: iterator it = arr.begin(); it != arr.end(); it++){
     cout << *(it) << " ";
    
   }    
    
   
   return 0;
}