 // list  container
  //  it is similar to the vector but it is little  bit different
 #include<bits/stdc++.h>
  using namespace std;
   void explainlist() {
     list<int> ls;
      ls.push_back(2); //{2}
       ls.emplace_back(4) ; // {2,4} // note insert option in the vector is more time taking than the 
//         using a push front operation in the list ;
    ls.push_front(5) ; // {5,2,4}
      ls.emplace_front(); // {2,4}4
      // rest functions same as vector
       // begin,end, rbegin, rend,clear ,insert ,size,swap all these functions is same in the list as in the vector
//    }