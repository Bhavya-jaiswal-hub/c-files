#include<bits/stdc++.h>
using namespace std;
class Node {
     public:
     int data;
     Node* next;
     Node* back;
     public:
     Node(int data1, Node* next1, Node* back1){
         data = data1;
         next = next1;
         back = back1;
     }

     Node(int data1){
         data = data1;
         next = nullptr;
         back = nullptr;
     }
};

Node* ConvertArrtoDll(vector<int> &arr) {
     Node* head = new Node(arr[0]);
     Node* prev = head;
     for( int i  = 1; i< arr.size(); i++) {
         Node* temp = new Node(arr[i], nullptr, prev);
         prev->next = temp;
         prev = temp;
     }

     return head;

}
void print(Node* head) {
     while(head != NULL) {
         cout << head->data << endl;
         head = head->next;
     }
}

Node* deleteHead(Node* head) {
     if(head == NULL || head->next == NULL) {
         return head;
     }

     Node* prev = head;
     head = head->next;
     prev->next = nullptr;
     delete (prev);

     return head;
}

Node* deleteTail(Node* head) {
     Node* tail = head;
     while(tail->next != NULL) {
         tail = tail->next;
     }

   Node* prev = tail->back;
   prev->next = nullptr;
   tail->back = nullptr;

   return head;

}

Node* removeKthElement(Node* head, int k ) {
     if(head == NULL) {
         return NULL;
     }
   int cnt = 0 ;
   Node* temp = head;
   while(temp != NULL) {
     cnt++;
     if(cnt == k) {
         break;
     }
     temp = temp->next;
    
   }
    Node* prev = temp->back;
     Node* front = temp->next;
     prev->next = temp->next;
     front->back = temp->back;
     temp ->next = nullptr;
     temp ->back = nullptr;
     delete(temp);  

     if(prev == NULL && front == NULL) {
        return NULL;
     }
     else if (prev == NULL) {
         return deleteHead(head);

     }
     else if(front == NULL) {
         return deleteTail(head);
     }

     return head;
     

}

int main() {
     vector<int> arr = {1,2,3,9};
     Node* head = ConvertArrtoDll(arr);
    // print(head);
    //  head = deleteHead(head);
    // head = deleteTail(head);

    head = removeKthElement(head, 2);
      print(head);
    return 0;
     
     

}