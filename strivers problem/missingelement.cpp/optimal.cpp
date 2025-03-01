#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k=0;
    int ele;
    int val;
    cin>> n;
    cout << endl;
    cin>> ele;
   
    cout<< endl;
    vector<int> nums;
    for(int i = 0; i<n; i++) {
         cin>>val;
         nums.push_back(val); 
    }
    for(int j = 0; j<n;j++){
         if(nums[j] != ele) {
            nums[k] = nums[j]; 
            k++;
         }
    }
    for(vector<int>::iterator it = nums.begin() ; it != nums.end(); it++ ){
        cout << *(it) << " ";
    }
    cout << "The unique elements in the list is " << k;
    
    return 0;
}