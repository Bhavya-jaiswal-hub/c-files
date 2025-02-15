#include<bits/stdc++.h>
 
using  namespace std ;
  
int main() {

    // pair<int,pair<int,int>> p = { 1,{2,3}};
    //  cout<< p.first << endl;
    //   cout<< p.second.second;
    //    pair<int,int> arr[] = {{1,3},{2,3},{4,5},{1,6}};
    //     cout <<arr[1].first;
    // take the two pairs as the input and then sum the corresponding element of it and store it on the third array 
    //  pair<int,int> a = {1,2};
    //  pair<int,int> b = {2,3}; 
    //   pair<int,int> c = {a.first + b.first, a.second + b.second};
       
    //    cout << c.first << endl << c.second;
        // take the pair array  as the input and then add the 2  at the every second part of each index of the array and then print that array 
        //  pair<int,int> arr[] = {{1,2},{2,3},{3,4},{4,5}};
         
        //   for(int i = 1; i<=3 ; i++) {
        //      arr[i].first = arr[i].first + i;
             
        //   }
        //     cout<< "updated array :" << endl;
        //      for(int i = 0; i<=3; i++)
        //      {
        //       cout << "{" << arr[i].first << ","<< arr[i].second  << "}";
        //      }
        //  vector<int> v;
        //   for(int i=0; i<=5; i++) {
        //      v.push_back(i);
        //   }
          //  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
          //     cout << *(it)<< "";
          //  } 
           // this auto is used for two purpose you can replace the iterator declaration statement in the loop as well as  it can auto detact the code which you 
            // for(auto it  = v.begin(); it != v.end() ; it++) 
            //  { 
            //   cout<< *(it);
            //  }  
            //  iterator is used to point the location of the vector element s thats why we used the *(iterator name) and it will print the vector element
            //  vector<int> v(5,100);
              // (n,m) this means that n times the 100 in the vector already preinstalled but you can edit the vector as well  the basic difference between the vector and the
              //  array is that vector size can be increase and the array size cannot be increased 
                  // for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
                  //     cout << *(it) << " " ;
                  // }
                  // up to this part the declaration and the iteration through the vector is completed  
                    
                    // vector<int> v = {1,2,3,4,5};
                    //  v.erase(v.begin()+1, v.begin() + 3);
                    // //  cout<< v[1]<< " ";
                    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
                    //    cout << *(it)<< " " ;
                    // }
                      
                      // vector<int> v = {1,2,3,4,5};
                      //  v.insert(v.begin(),6);
                      //  for(vector<int>::iterator it= v.begin(); it != v.end() ; it++)
                      // {
                      //       cout << *(it) << " ";
                      // }
                          //  vector<int> v = {10,20,12,23,35} ;
                          //   //  v.erase(v.begin() +2, v.begin() +4) ;  
                          //      vector<int> copy = {23,56};
                          //       //  v.insert(v.begin() +1,2,10);
                                
                          //           v.insert(v.begin(),copy.begin() ,copy.end());
  
                          //           for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)  
                          //           {
                          //              cout << *(it) << " " ; 
                          //           }  
                          //            cout<< endl << v.size() ; 
                          //           // onevector name ().swap.another vector name ;
                          //             // this statement is used to swap  the one vector into the another vector
                          //                     v.clear(); // this statement is used to remove all the elements from the vector
                          //               v.empty() ;
                          //                // this statement checks whether the given vector is empty or not if it is empty then  
                          //                 // it will return the true otherwise it will return the false
                          
                          // set stores everything in the  uniquely  sorted fashion
                          //  set<int> st;
                          //   st.insert(2); 
                          //    for(int i =0; i<=4;i++) {
                          //      st.insert(i);
                          //    }
                          //     auto it = st.find(2);
                          //     //  cout << *(it);
                          //   for(set<int>::iterator it = st.begin(); it != st.end(); it++)
                          //                {
                          //                  cout<< *(it) << " ";
                          //                }

                          //                auto it = st.find(2);
                          //                 st.erase(it); 
                          //                 cout << endl ;
                          //                 for(set<int>::iterator it = st.begin(); it!= st.end(); it ++) {
                                             
                          //                     cout<< *(it) << " " ;
                          //                 }
                          //                  cout<< endl ;
                          //                  int size =  st.size(); 
                          //                  cout << size ;
                                        //     set<int> st;
                                        // for(int i =10; i<=40; i = i + 10) {
                                        //       st.insert(i);
                                        // }   
                                        //   auto it = st.find(2);
                                        //     cout << *(it) ;  
                                     // note very important point in that is it is  st.find(key) this key is nothing but the searched element  iterator points to that element and when you applied 
    //           
     // multiset it cans store the unique elements but it can also store the repeated element also 
                  multiset<int> mt ;
                      for(int i =0; i<= 5; i++)  {
                             mt.insert(1);
                      }   
                    // mt.erase(1);     
                    
                     auto it = mt.erase(mt.find(1));
                     for(multiset<int>::iterator it = mt.begin() ; it != mt.end() ; it++) {
                         cout<< *(it) << " ";
                     } 
                     //other rest functions is same as the set  
                      // unordered set it is same as the set but the main thing is that it does not store  the elements in the sorted manner as the set stores
     return 0;
} 