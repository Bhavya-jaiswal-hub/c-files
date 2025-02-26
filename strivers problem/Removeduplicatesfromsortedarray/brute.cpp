#include<bits/stdc++.h>
using namespace std;
// you have to remove the duplicate element from the sorted array and then tell the 
// number of unique elemets in the sorted array
int main() {
   vector<int> vec;
   int n;
   int val;
   cout <<endl;
   cin >> n;
   for(int i = 0; i<n;i++) {
          cin >> val;
          vec.push_back(val);
   }
   set<int> stt;
   for(int j =0; j<n; j++) {
       stt.insert(vec[j]);
   }
   int index = 0;
   for(auto it: stt) {
       vec[index] = it;
       index++;
   }
   for(int k = 0; k<stt.size(); k++) {
      cout << vec[k] << " " ;
   }



     return 0;
}