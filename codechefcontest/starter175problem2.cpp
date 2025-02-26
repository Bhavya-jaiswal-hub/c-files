#include<bits/stdc++.h>
using namespace std;
  
   int timetaken(int N, int Time) {
    Time++;
    while(N > 0) {
        if(N==1 || N==3) {
            return Time; 
        }
        if(N==2) {
             return 2;
        }
        if(N%2 == 0  && N>3) {
             Time = N/2 + 1;
             return Time;
        }
        if(N%2 != 0 && N>3){
             Time = N/2;
             return Time;
        }
    }
    return -1;

   }
 
int main () {
  int n;
  cin >> n;
  cout << endl;
  int time = 0;
  int times = timetaken(n,time);
  cout << endl;
  cout << "The time taken in seconds is " << times;

     return 0;
}