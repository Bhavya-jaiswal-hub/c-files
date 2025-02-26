#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec = {-2,-3,4,-1,-2,1,5,3};
    int maxi = INT_MIN;
    for(int i =0; i< vec.size(); i++) 
    {
       
       
        for(int j = i; j<vec.size(); j++) {
             int sum = 0;
             for(int k = i; k<j;k++) {
                  sum = sum + vec[k];
                  maxi = max(sum,maxi);
             }
            

        }

    }
    cout << "The maximum sum is" << endl << maxi;
     return 0;
}