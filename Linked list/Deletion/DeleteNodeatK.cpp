#include<bits/stdc++.h>
using namespace std;

class Node {
     public:
     int data;
     Node* next;
     public:
     Node(int data1, Node* next1) {
         data = data1;
         next = next1;

     }
     public: 
     Node(int data1){
         data = data1;
          next = NULL; 

     }
};

Node* ArrtoLL(vector<int> & arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head; 

    for( int i  = 1; i< arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }

    return head;
}

Node* removeK(Node* head , int k){
     if(head == NULL) return head;
     if(k == 1) {
         Node* temp = head;
         head = head->next;
         delete temp;
         return head;
     }

     int cnt = 0;
     Node* prev = NULL;
     Node* temp = head;
     while(temp != NULL){
         cnt++;
         if( cnt == k){
             prev->next = prev->next->next;
             delete temp;
             break;
         }
         prev = temp;
         temp = temp->next;
     }
     return head;

}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2,3,5,7};
    Node* head =  ArrtoLL(arr);
    head = removeK(head, 2);
    printList(head);
    

}