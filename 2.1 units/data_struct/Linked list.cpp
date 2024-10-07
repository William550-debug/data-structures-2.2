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

    
};