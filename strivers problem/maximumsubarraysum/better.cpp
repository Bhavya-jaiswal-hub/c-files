#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec = {-2,-3,4,-1,-2,1,5,-3};
    int maxi = INT_MIN;
    for(int i = 0; i< vec.size(); i++) {
         int sum = 0;
        for(int j = i; j<vec.size(); j++) {
            sum = sum + vec[j];
            maxi = max(maxi,sum);
        } 
    }
    cout<< "The maximum sum is " << endl << maxi;
     return 0;
}