#include<bits/stdc++.h> 
using namespace std;

struct Node {
      public: 
      int data;
      Node* next;

      public: 
      Node(int data1, Node* next1){
           data = data1;
           next = next1;

      }
        public: 
      Node(int data1){
           data = data1;
           next = nullptr;

      }
};
Node* convertArr2LL(vector<int> &arr){
     Node* head = new Node(arr[0], nullptr);
     Node* mover = head;
     for(int i = 1; i<arr.size(); i++) { 
         Node* temp = new Node(arr[i]);
         mover->next = temp;
         mover = temp;
     }
     return head;
}

Node* removesHead(Node* head) {
     Node* temp;
     temp = head;
     head = head->next;
     delete temp;
     return head;
}

Node* removeTail(Node* head){
     Node* temp = head;
     if(head->next == NULL || head == NULL) {
         return NULL;
     }
     while(temp->next->next != NULL) {
         temp  = temp->next;
     }
     delete temp->next;
     temp->next = nullptr;

     return head;

}

int main(){
    vector<int> arr  = {2,3,4,5};
     Node* head = convertArr2LL(arr);
    // Node* y = new Node(arr[0],nullptr);
    // cout  << y->data; 

    // delete the head of the linked list 
     
    //   head  = removesHead(head);
    //   cout << head->data;

      // delete the tail of the linked list;

    // head = removeTail(head);
    // cout << head->next->next->data;

    // delete the kth element of the linked list 
    
}