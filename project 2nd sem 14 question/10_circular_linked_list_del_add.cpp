/* 10. WAP in C++ to implement insertion, deletion of a node and 
   counting number of nodes in a circularly linked list.
*/
#include <iostream>
using namespace std;

// Node class
class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};
// Circular linked list class
class CircularLinkedList {
public:
  Node *head;
  CircularLinkedList() {
    this->head = NULL;
  }
  // Insert a node at the beginning of the list
  void insertAtBeginning(int data) {
    Node *newNode = new Node(data);
    if (head == NULL) {
      head = newNode;
      newNode->next = head;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  // Insert a node at the end of the list
  void insertAtEnd(int data) {
    Node *newNode = new Node(data);

    if (head == NULL) {
      head = newNode;
      newNode->next = head;
    } else {
      Node *currentNode = head;
      while (currentNode->next != head) {
        currentNode = currentNode->next;
      }
      currentNode->next = newNode;
      newNode->next = head;
    }
  }

  // Delete a node from the beginning of the list
  void deleteAtBeginning() {
    if (head == NULL) {
      cout << "List is empty" << endl;
    } else {
      Node *tempNode = head;
      head = head->next;
      delete tempNode;
    }
  }

  // Delete a node from the end of the list
  void deleteAtEnd() {
    if (head == NULL) {
      cout << "List is empty" << endl;
    } else {
      Node *currentNode = head;
      Node *previousNode = NULL;
      while (currentNode->next != head) {
        previousNode = currentNode;
  currentNode = currentNode->next;
      }
      previousNode->next = head;
      delete currentNode;
    }}
  
  // Count the number of nodes in the list
  int countNodes() {
    int count = 0;
    Node *currentNode = head;
    while (currentNode != NULL) {
      count++;
      currentNode = currentNode->next;
    
    return count;
    }}
  // Display the list
  void display() {
    Node *currentNode = head;
    while (currentNode != NULL) {
      cout << currentNode->data << " ";
      currentNode = currentNode->next;
    }
    cout << endl;
  }
};

int main() {
  CircularLinkedList list;
  list.insertAtBeginning(1);
  list.insertAtBeginning(2);
  list.insertAtBeginning(3);

  list.insertAtEnd(4);
  list.insertAtEnd(5);
  list.display();
  list.deleteAtBeginning();
  list.deleteAtEnd();
  list.display();

  cout << "Number of nodes: " << list.countNodes() << endl;

  return 0;
}