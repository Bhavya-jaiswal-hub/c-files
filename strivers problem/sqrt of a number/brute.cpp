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
              if(array[j]*array[j] == target){
                 cout << array[j];
                 break;
              }

              else if(array[j]*array[j] < target && array[j+1]*array[j+1] > target){
                 cout << array[j];
                 cout << endl;
              }
              
      }

     return 0;
}