#include <iostream>
using namespace std;

class Node{
public:
    int Value;
    Node* Next;
};
void printList(Node* head){
    while(head!=NULL){
        cout<<head->Value<<endl;
        head = head->Next;
    }
}
void insertAtTheFront(Node** head, int newValue){
    //1.prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    //2.put it infront of a current head
    newNode->Next = *head;
    //3. move the head of the list to poitn to the new node 
    *head = newNode;
}
void insertAtTheEnd(Node** head, int newValue){
    //1.prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    //2.if list is empty, it will be a head node
    if(*head == NULL)
        *head = newNode;
    return;
    //3.Find the last node
    Node *last = *head;
    while(last->Next!=NULL){
        last = last->Next;
    }
    //4.Insert new Node after the last current node (at the end)
    last->Next = newNode;
}
int main(){
    
    //creating the elements of the list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    //assigning values to the elements
    head->Value = 1;
    second->Value = 2;
    third->Value = 3;

    //linking the elements
    head->Next = second;
    second->Next = third;
    third->Next = NULL;
    insertAtTheFront(&head,-1);
    insertAtTheFront(&head,-2);
    insertAtTheEnd(&head,4);
    printList(head);

    system("pause>0");
}