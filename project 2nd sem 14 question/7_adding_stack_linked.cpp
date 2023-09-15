// 7. WAP in C++ to add two very large numbers using the stack and linked list.
#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};
Node* addNumbers(Node* num1, Node* num2) {
    stack<int> stack1, stack2, result;
    Node* sum = nullptr;
    int carry = 0;
    while (num1 != nullptr) {
        stack1.push(num1->data);
        num1 = num1->next;
    }
    while (num2 != nullptr) {
        stack2.push(num2->data);
        num2 = num2->next;
    }
    while (!stack1.empty() || !stack2.empty() || carry != 0) {
        int digit1 = stack1.empty() ? 0 : stack1.top();
        int digit2 = stack2.empty() ? 0 : stack2.top();
        int sumDigits = digit1 + digit2 + carry;
        carry = sumDigits / 10;
        sumDigits %= 10;
        Node* newNode = new Node(sumDigits);
        newNode->next = sum;
        sum = newNode;
        if (!stack1.empty()) stack1.pop();
        if (!stack2.empty()) stack2.pop();
    }
    return sum;
}
void insert(Node*& head, int digit) {
    Node* newNode = new Node(digit);
    newNode->next = head;
    head = newNode;
}
void display(Node* head) {
    if (head == nullptr) return;
    display(head->next);
    cout << head->data;
}
int main() {
    Node* number1 = nullptr;
    Node* number2 = nullptr;
    Node* sum = nullptr;
    string num1;
    cout << "Enter the first number: ";
    cin >> num1;
    string num2;
    cout << "Enter the second number: ";
    cin >> num2;
    for (char digit : num1)
        insert(number1, digit - '0');
    for (char digit : num2)
        insert(number2, digit - '0');
    sum = addNumbers(number1, number2);
    cout << "Sum: ";
    display(sum);
    cout << endl;
    Node* temp;
    while (sum != nullptr) {
        temp = sum;
        sum = sum->next;
        delete temp;
    }
    return 0;
}
// output:-
// Enter the first number: 100
// Enter the second number: 200
// Sum: 300