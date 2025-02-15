#include<bits/stdc++.h>
  using namespace std;
     void natural( int i,int n) {
      if (i>n) {
          return;
      }
      cout << i ," ";
      natural(i+1, n);
     }
    
   int main() {
     int n;
     cin >> n ;
      natural(1,n);

       return 0; 
   

   } 