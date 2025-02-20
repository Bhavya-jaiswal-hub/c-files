#include<bits/stdc++.h>
using namespace std;
 int main() {
    int n;
    cin >> n;
    int val;
    cout << endl;
    vector<int> vec;
    for(int i =0; i<n; i++) {
         cin >> val;
         vec.push_back(val);
    }
    cout << endl;
    int target;
    cin >> target;
    cout << endl;
     
    
    map<int,int> mpp;
    for(int j =0; j<n; j++){

        int num = vec[j];
        int more = target - vec[j];
        if(mpp.find(more) != mpp.end()) {
            cout << mpp[more] << " " << j << endl;  
            return 0;  
        }
        mpp[num] = j;


    }
   cout << " -1 -1" ;
    
     return 0;
 }