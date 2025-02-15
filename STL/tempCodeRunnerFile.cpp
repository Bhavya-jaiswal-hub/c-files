#include<bits/stdc++.h>
 using namespace std;
  
   int main() {
    vector<int> v ;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
         cout<<  *it << " " ;
    }
     cout << endl;
     v.erase(v.begin());
       cout<< v[0];
     return 0;

   }