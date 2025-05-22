// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxlen = 0;
//         int len;
//         for(int i = 0; i<nums.size(); i++) {
//              int zeros = 0;
//              for(int j = i; j<nums.size();j++){
//                 if(nums[j] == 0){
//                      zeros = zeros + 1;
//                 }
//                 if(zeros <= k){
//                      len = j - i + 1;
//                      maxlen = max(maxlen,len);
//                 }
//                 else {
//                      break;
//                 }
//              }
              
//         }
//         return maxlen;
//     }
// };