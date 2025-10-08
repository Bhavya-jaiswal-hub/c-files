#include<bits/stdc++.h>
using namespace std;

class  Node {
     public:
     int data;
     Node* next;

     public: 
     Node( int data1, Node* next1){
         data = data1;
         next = next1;
     }

     public: 
     Node(int data1){
         data = data1;
         next = nullptr;    
     }
    
};

 Node* convertArrtoLL(vector<int> &arr){
        Node* head  = new Node(arr[0]);
        Node* mover =  head;
        for(int i = 1; i< arr.size(); i++){
             Node* temp = new Node(arr[i]);
             mover-> next = temp;
             mover = temp;

        }
        return head;
     }
// note we can use the class word in place of  the struct 

int main() {
     vector<int> arr  = {5,2,3,4};
    //  Node* y = new Node(arr[2], nullptr);
    // cout <<  y ;
    // cout << endl;
    // cout << y->data; 
    Node* head = convertArrtoLL(arr);
    cout << head->data;
    cout << endl;
    Node* temp = head;
    while(temp) {
         cout << temp->data << " ";
         temp = temp->next;
         
    }


}