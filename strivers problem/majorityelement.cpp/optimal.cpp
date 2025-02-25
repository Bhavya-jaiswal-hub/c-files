#include<bits/stdc++.h>
using namespace std;
int main () { 
    vector<int> vec;
    int n;
    int val;
     cin >> n;
     cout << endl;

     for(int i = 0 ; i<n ; i++) {
        cin >> val;
        vec.push_back(val);

     }
     int count = 0;
     int element;
      for(int j = 0; j<n; j++) {
          if(count == 0) {
             count = 1; 
             element = vec[j];
          }
          else if(element == vec[j]){
              count++;
          }
          else {
             count--;
          }
      }
      // this code specify that there is a doubt that majority element can exist or not 
      int count1 = 0;
      for(int k = 0; k < n; k++) { 
             if(element == vec[k]){
                 count1++; 
             }
      }
       if(count1 > n/2) {
         cout << "The majority element is " << endl << element;
       }
    return 0;
}