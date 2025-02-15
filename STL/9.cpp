// Set
 // everything is sorted and unique in the set
  #include<bits/stdc++.h>
  using namespace std;

  void explainSet() {
    set<int>st;
     st.insert(1); //{1}
     st.insert(2);//{1,2}
      st.insert(4);//{1,2,3}
   st.insert(3);//{1,2,3,4}

   //Functionality of insert in vector 
   // can be used also,that only increases 
   // efficiency
    // begin(),end(),rbegin(),rend(),size(),
    // empty() and swap() are same as those of above 
     // {1,2,3,4,5}
      auto it = st.find(3); // it will point the 3
       // {1,2,3,4,5}
        auto it = st.find(6);
        // now in this case if the finded element is not present than it will point the just after the end
    st.erase(5); // {1,2,3,4} it will take the logarithmic time
     
     auto it = st.find(3);
      st.erase(it); // it takes constant time
       

       // {1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1,it2); // after erase {1,4,5} [ first,last]

        // lower bound() and upper bound() function works in the same way 
        // as in vector it does 

          // This is the syntax 
           auto it = st.lower_bound(2);
            auto it = st.upper_bound(3) ;
             // for learning the lower bound and uppper bound go back and learn the striver lower bound and upper bound video
// every thing work in the set in the logarithmic time complexiticity means insertio and deletion in the logarithmic time complexiticity 
  } 
   int main() {
      explainSet();

     return 0 ;
   }