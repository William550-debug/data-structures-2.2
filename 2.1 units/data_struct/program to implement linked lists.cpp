#include <iostream>>
using namespace std;


struct  Node
{
    /* data */
    int data;
    Node* next;
};

//define the linked list class
class LinkedList{
    //pointer to the first node in the linked list
    Node* head;


    public:
    //constructor that initializes the linked list head to null
    LinkedList(){
        head = NULL;
    }

    //function to insert a node at the beginning of the linked list
    /*The selected code snippet is a method within the `LinkedList` class. This method, `insertAtBeginning`, is designed to insert a new node at the beginning of the linked list.

Here's a breakdown of the code:

1. A new `Node` object is dynamically allocated using the `new` keyword. This new node is assigned to the pointer `newNode`.
2. The `data` field of the new node is set to the provided `value`.
3. The `next` field of the new node is set to the current `head` of the linked list. This links the new node to the rest of the list.
4. Finally, the `head` of the linked list is updated to point to the new node. This effectively places the new node at the beginning of the list.

This method demonstrates the fundamental operation of inserting a new node at the beginning of a linked list.*/
    void insertAtBeginning(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    //function to insert a new node at the end of the list
    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        //if the list is empty, set the new node as the head
        if(head == NULL){
            head = newNode;
            return;
        }

        //find the last node in the list
        Node* lastNode = head;
        while(lastNode->next!= NULL){
            lastNode = lastNode->next;
        }

        //link the new node to the last node
        lastNode->next = newNode;
    }


    //function to insert  a new node in a specific position in the list
    void insertAtPosition(int value, int position){
        if(position == 0){
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* currentNode = head;
        for(int i = 0; i < position - 1; i++){
            if(currentNode == NULL){
                cout << "Position out of range" << endl;
                delete newNode;
                return;
            }
            currentNode = currentNode->next;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }

    //function to  delete the first node of the list
    void deleteFromBeginning(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }

        Node* currentNode = head;
        Node* prevNode = NULL;
        while(currentNode->next!= NULL){
            prevNode = currentNode;
            currentNode = currentNode->next;
        }

        if(prevNode!= NULL){
            prevNode->next = NULL;
        }else{
            head = NULL;
        }

        delete currentNode;
    }


}



