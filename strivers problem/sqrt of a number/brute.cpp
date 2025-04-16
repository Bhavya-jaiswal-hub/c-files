#include<bits/stdc++.h>

using namespace std;
int main() {

      int target;
      int arrsize;
      int val;
      vector<int> array;
      cin >> target ;
      cin >> arrsize;
      for(int i = 0; i<arrsize; i++) { 
        cin >> val;
        cout << endl;
        array.push_back(val);
      }


      for(int j = 0; j < arrsize; j++) {
              if(j*j == target){
                 cout << j;
                 break;
              }

              else if(j*j < target && (j+1)*(j+1) > target){
                 cout << j;
                 cout << endl;
              }
              else {
                 cout << "The sqrt of a given number not found in the array";
                 break;
              }
      }

     return 0;
}