#include<bits/stdc++.h>
using namespace std;
// this is  the brute force solution of mine
 int main() {
   int counter = 0;
    vector<int> vec;
    vector<int> arr = { 1,1,0,1,1,1,0,1,1};
     int n = arr.size();
     for(int i = 0; i <= n; i++)
 {
           if(arr[i] == 1) {
             counter = counter +1;
           }
            else {
                 vec.push_back(counter);
                  counter = 0;
            }
      }
      for(vector<int>::iterator it = vec.begin(); it != vec.end() ; it++ )
       {
         cout<< *(it) << " " ;
        } 
         cout<< endl ;
          int N = vec.size();
           int max = vec[0];
            for( int i = 1; i< N; i++) {
                  if(vec[i] > max) {
                     max = vec[i];
                  } 

                 cout <<  "The maximum no of consecutive ones is "   << "  " <<  max ;
            
            }
          
     return 0;

 }