//Approach in creating a linked list
//Define a structure node having two members data and the next pointer 
/*
the data will store the address of the next node in the sequence
Define  a class Linked  list
consisting of the member functions of the linked list
 and the head pointer that will store the reference  of a particular linked  list
 

 initialize the head to Null as the linked list is empty initially


 struct Node{
  int data; Represents the data stored in the node
  Node* next;stores the reference of the next node in the sequence
 };
*/
// Operations on Linked List:
// insertAtBeginning: Adds a new node at the list start, O(1) time, O(1) space.
// insertAtEnd: Adds a new node at the list end, O(n) time, O(1) space.
// insertAtPosition: Adds a new node at a specific position, O(n) time, O(1) space.
// deleteFromBeginning: Removes Head node, updates Head, O(1) time, O(1) space.
// deleteFromEnd: Removes last list node, O(n) time, O(1) space.
// deleteFromPosition: Removes a node at a given position, O(n) time, O(1) space.
// Display: Prints all node values, O(n) time, O(1) space.


//C++ implementation of a linked list
#include <iostream>
using namespace std;

//structure for a node in the linked list
struct Node{
    int data;
    Node* next;
};

//class for the linked list
class LinkedList{
    //pointer to the first node in the linked list
    Node* head;

    public:
    //constructor to initialize the head to NULL
    LinkedList():head(NULL) {}

    //function to insert a node at the beginning of the linked list
    void insertAtBeginning(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }


    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        //if the linked list is empty, make the new node as head
        if(head == NULL){
            head = newNode;
            return;
        }

        //otherwise, traverse to the last node and append the new node
        Node* temp = head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int pos, int value){
        if (pos < 1){
            cout<<"position should be greater than 1" << endl;
            
            return;
        }

        if (pos == 1){
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        //transverse to the node before the desired position
        Node* temp = head;
        for(int i=1; i<pos-1; i++){
            if(temp == NULL){
                cout<<"Position is greater than the number of nodes" << endl;
                delete newNode;
                return;
            }
            temp = temp->next;
        }

        //if the desired position is the last node, append the new node
        if(temp->next == NULL){
            temp->next = newNode;
            return;
        }

        //insert the new node between the two nodes
        newNode->next = temp->next;
        temp->next = newNode;


    }

    //function to delete the first node of the list
    void deleteFromBeginning(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    //delete from the end of the list
    void deleteFromEnd(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while(temp->next->next!= NULL){
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deleteFromPosition(int position ){
        if ( position < 1){
            cout<<"Position should be greater than 1" << endl;
            return;
        }

        if (position == 1){
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for(int i=1; i<position-1; i++){
            if(temp == NULL || temp->next == NULL){
                cout<<"Position is greater than the number of nodes" << endl;
                return;
            }
            temp = temp->next;

            //if the desired position is the last node, delete it
            if(temp->next->next == NULL){
                delete temp->next;
                temp->next = NULL;
                return;
            }
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

    
    }

    void Display(){
        Node* temp = head;
        while(temp!= NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;  //print a new line after displaying all nodes
    }

    
};

int main(){
    LinkedList list;
    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtPosition(2, 30);
    list.Display(); // Output: 10 20 30

    list.deleteFromBeginning();
    list.Display(); // Output: 20 30

    list.deleteFromEnd();
    list.Display(); // Output: 20

    list.deleteFromPosition(2);
    list.Display(); // Output: 20

    return 0;
}