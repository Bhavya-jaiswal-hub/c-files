#include<bits/stdc++.h>
using namespace std;
int main() {
     vector<int> nums1 = {1,2,3,0,0,0};
     vector<int> nums2 = {2,5,6};
     vector<int> unionarr;
      int i = 0;
      int j = 0;
     while( i<nums1.size()-3 && j<nums2.size()) {
         if(nums1[i] <= nums2[j]){
             unionarr.push_back(nums1[i]);
             i++;
         }
         else {
             unionarr.push_back(nums2[j]);
             j++;
         }
     }
      while(j<nums2.size()){
         unionarr.push_back(nums2[j]);
         j++;      
        }
        while(i<nums1.size()-3){
            unionarr.push_back(nums1[i]);
            i++;
        }

        for(int k = 0; k<unionarr.size(); k++)
        {
             nums1[k] = unionarr[k];
        }

        for(vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++){
             cout << *(it) << " ";
        } 

     return 0;
}
