// stack
 #include<bits/stdc++.h>
  
  using namespace std;

  void explainStack() {
     stack<int> st;
     st.push(1);  // {1}
     st.push(2);  // {2,1}
      st.push(3); // {3,2,1}
       st.push(4); // {3,3,2,1}
       st.emplace(5); //{5,3,3,2,1} 

        cout << st.top(); // it will print 5 
         st.pop(); // it will pop the 5 from the stack
           cout << st.top(); // 3 because 5 has beem poped from the stack
            cout << st.size();
             
             cout<< st.empty();
             stack<int>st1,st2;
              st1.swap(st2); // this line is for for swap the two stacks
  } 


   int main() { 
        
      explainStack();
      return 0;
   }

