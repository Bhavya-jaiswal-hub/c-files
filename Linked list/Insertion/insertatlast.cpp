#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    public:
   Node(int data1, Node* next1){
     int data = data1;
     Node* next = next1;
   }
   public:
    Node(int data1) {
         data = data1;
         next = nullptr;
     }
    
};

Node* ArrtoLL(vector<int> & arr){
     Node* head = new Node(arr[0]);
     Node* mover = head;
     for(int i  = 1; i< arr.size(); i++){
         Node* temp = new Node(arr[i]);
         mover->next = temp;
         mover = temp;


     }

     return head;
}

Node* insertLast(Node* head , int val){
     if(head == NULL) {
         return new Node(val);

     }
    Node* temp = head;
    while(temp->next != NULL){
         temp = temp->next;
    }

    Node* newNode = new Node(val);
    temp->next = newNode;
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
     vector<int> arr = {2,3,4,5};
     Node* head = ArrtoLL(arr);
     head = insertLast(head, 100);
     printList(head);
     
}   


