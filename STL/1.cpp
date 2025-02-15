#include<bits/stdc++.h>
using namespace std;
 void explainpair () {
     // c++ stl is divided into the four parts algorithmns, containers, functions,itereables
       // pairs
       // pairs is used to store two data types together and both datatypes can be anything 
       // pairs is also the another data type 
      pair<int,int> a = {1,2};
        cout << a.first << " " << a.second; 

        pair<int,pair<int,int>> b = {2,{3,4}};
         cout<< b.second.first << " " << b.first << b.second.second;

         pair<int,int> arr[] =  {{1,2},{3,4},{5,6}} ;// array declaration using pair is bit different is with {} not [].
         cout<< arr[1].second;

 }

  // vectors are the dynamic in nature we know that array are fixed in size thats why we used vectors
    // this whole vector code is the vector declaration 
 void explainvector(){m
      vector<int> v;
      v.push_back(1);
      v.emplace_back(2);// this is another method of adding the element in the end of the vector
       // the emplace back method is generally faster than the push back method
  vector<pair<int,int>> vec;   


    vec.push_back({1,2});
     vec.emplace_back(1,2);
// this is for when you add the pair type data in the vector
 vector<int> v(5,100);// it will put 5 hundred at the five instances

  vector <int> v(5); // it will add 5 zero or garbage value at the five instances

   vector<int> v1(5,20);
   vector<int> v2(v1);
      // how to print the vector
       vector<int>::iterator it = v.begin(); // it means it points the first element's address  of the vector
      vector<int>::iterator it = v.rend(); // it will point the element after the end element of the vector
      vector<int>::iterator it = v.rbegin();// it will point the preelement of the vectors first element
        it++;
        cout<< *(it) << "";
         // we can also access the element of the vector by the arrays method  
           cout<< "v[0]"; 
            cout<< "v.back()"; // it will point  the last element of the vector;
            // we can point the all elements of the vector with the help of the for loop
             for(vector<int>:: iterator it = v.begin(); it!= v.end(); it ++) {
              cout<<"*(it)";
              // vector<int>::vector except writing this all time we can write auto statement;
             }
              v.erase(v.begin() + 1,v.begin()+3); // this is the erase method of the vector through which we can delete the elements of the vector 
    //   this is like [start,end]
       cout<< v[0];
    // Insert function
     vector<int> v(2,100); // {100,100} 
        v.insert(v.begin(),100); // {100,100,100}
         v.insert(v.begin() +1,2,10); // {100,10,10,100,100}
          
          vector<int> copy(2,50);
           v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,100,10,10,100,100}
             
             //{10,20}
              cout<< v.size(); // 2 
               //{10,20}
                 v.pop_back(); // {10}
                  // v1 --> {10,20}
                  // v2--> {30,40}
                   v1.swap(v2); //  v1 --> {30,40} , v2--> {10,20}
                     v.clear(); // it will erase all the elements of the vector
                      cout << v.empty();

// here first container vector is completed 
   } 
    
    
 
  int main(){
    //  explainpair();
     explainvector();
      return 0;
  }

   // note in the recursion the return statement is not present then if the code terminate it will return 