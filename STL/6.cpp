//  Queue
// it holds the fifo property means that comes the first will out the first
 #include<bits/stdc++.h>
  using namespace std;
    void explainQueue () {
         queue<int> q; 
         q.push(1); //{1}
          q.push(2) ; // {1,2}
           q.emplace(3); // { 1,2,3} 

           q.back() +=5 ;
            cout << q.back(); // prints 9
             
              cout<< q.front(); // prints 1
               q.pop(); // { 2,3}
                cout << q.front(); // prints 2
    // size swap empty same as stack  
                
    }