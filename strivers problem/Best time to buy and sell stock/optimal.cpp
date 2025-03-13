#include<bits/stdc++.h>
using namespace std;
int main() {
    int val;
    vector<int> prices;
    int n;
    cin>> n;
    for(int i = 0; i<n; i++){
         cin>> val;
         prices.push_back(val);
    }
     int profit = 0;
     int cost;
     int mini = prices[0];
     for(int j = 1; j<n; j++){
      cost = prices[j] - mini; 
      profit = max(profit, cost);
      mini = min(mini,prices[j]);  
     }
      cout<< profit;
      cout << endl;

     return 0;
}