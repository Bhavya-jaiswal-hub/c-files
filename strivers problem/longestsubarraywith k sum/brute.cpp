#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, num, len = 0;
    vector<int> nums;
    
    cin >> n;
    cin >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int m = i; m <= j; m++) {  
                sum += nums[m];
            }
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }

    cout << "The maximum subarray length is: " << len << endl;
    return 0;
}
