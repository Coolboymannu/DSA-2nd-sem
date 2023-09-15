/*11. WAP in C++ to implement polynomials using stack
and linked list.
*/
#include <iostream>
#include <math.h>
using namespace std;
class stack;
// Define a node class for the linked list.
struct Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

// Define a polynomial class.
class Polynomial {
public:
  Node *head;
  Node *tail;

  Polynomial() {
    this->head = NULL;
    this->tail = NULL;
  }

  // Insert a new node at the end of the linked list.
  void Insert(int data) {
    Node *newNode = new Node(data);

    if (this->head == NULL) {
      this->head = newNode;
      this->tail = newNode;
    } else {
      this->tail->next = newNode;
      this->tail = newNode;
    }
  }

  // Evaluate the polynomial using the stack.
  int Evaluate(int x) {
    Stack stack;

    // Push the coefficients of the polynomial in reverse order onto the stack.
    Node *currentNode = this->head;
    while (currentNode != NULL) {
      stack.Push(currentNode->data);
      currentNode = currentNode->next;
    }

    // Pop the coefficients off the stack one by one and compute the value of the polynomial.
    int result = 0;
    bool s = stack.IsEmpty();
    while (!s) {
      result += stack.Top() * pow(x, stack.Size() - 1);
      stack.Pop();
    }

    return result;
  }

  // Print the polynomial.
  void Print() {
    Node *currentNode = this->head;
    while (currentNode != NULL) {
      cout << currentNode->data << " ";
      currentNode = currentNode->next;
    }
    cout << endl;
  }
};

// Define a stack class.
class Stack {
public:
  struct Node *top;
  int size;

  Stack() {
    this->top = NULL;
    this->size = 0;
  }

  // Push a new element onto the stack.
  void Push(int data) {
    struct Node *newTop = new Node(data);

    if (this->top == NULL) {
      this->top = newTop;
    } else {
      newTop->next = this->top;
      this->top = newTop;
    }

    this->size++;
  }

  // Pop the top element from the stack.
  void Pop() {
    if (this->top == NULL) {
      cout << "Stack is empty." << endl;
      return;
    }

    Node *temp = this->top;
    this->top = this->top->next;
    delete temp;

    this->size--;
  }

  // Check if the stack is empty.
  bool IsEmpty() {
    return this->top == NULL;
  }

  // Get the top element of the stack.
  int Top() {
    if (this->top == NULL) {
      cout << "Stack is empty." << endl;
      return -1;
    }

    return this->top->data;
  }

  // Get the size of the stack.
  int Size() {
    return this->size;
  }
};

int main() {
  Polynomial polynomial;

  polynomial.Insert(3);
  polynomial.Insert(2);
  polynomial.Insert(1);

  cout << "Polynomial: ";
  polynomial.Print();

  cout << "Evaluation at x = 2: " << polynomial.Evaluate(2) << endl;

  return 0;
}
