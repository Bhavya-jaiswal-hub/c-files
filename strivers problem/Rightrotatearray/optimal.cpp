#include<bits/stdc++.h>
using namespace std;
int main() {
   int n,k;
    cin>> n;
    cout << endl;
    int val;
    cin>> k;
    vector<int>nums;
    for(int i =0; i<n;i++) {
         cin>> val;
         nums.push_back(val);
    }
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin() + k);
    reverse(nums.begin()+k,nums.end());

    for(int j = 0; j<n; j++) { 
        cout<< nums[j] <<" ";
    }
    


     return 0;
}