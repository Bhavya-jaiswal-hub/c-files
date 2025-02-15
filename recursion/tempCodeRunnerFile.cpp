#include<bits/stdc++.h>
using namespace std;
void ReverseNatural(int n,int i) {
 if (n < i){
    return;
 }
  cout << n , "";
   ReverseNatural(n-1,1);

}
 int main () {
     int n;
     cin >> n;
     ReverseNatural(n,1);
 }