// priority queue
 #include<bits/stdc++.h>
  using namespace std;

 void explainPQ () {
     pq.push(5) ; // {5}
     pq.push(2) ; // {5,2} 
      pq.push(8) ; // {8,5,2} 
       pq.emplace(10) ; // {10,8,5,2} 

     cout <<pq.top(); // prints 10
     pq.pop(); // {8,5,2}
      
// in priority queue elements arranged in the descending order 
    cout << pq.top(); // prints 8 
       // size swap empty function same as others 
        // minimum heap  it is also known as the minimum priority queue menans it will store data in the ascending order means it will give priority to the lowest element of the queue
      // syntax of the minimum heap
       priority_queue <int, vector<int>, greater<int>> pq;  
        pq.push(5); // {5}
        pq.push(2); // {2,5}
        pq.push(8); // {2,5,8}
        pq.emplace(10); // {2,5,8,10}

        cout << pq.top() ; // prints 2     
            
 // time complexiticity of the push is the logn 
//    
 }