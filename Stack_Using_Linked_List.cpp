#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
class Stack_Using_Linked_List{
    node *front,*end;
    public:
    Stack_Using_Linked_List(){
        front = NULL;
        end = NULL;
    }
    void push(int val){
        node *nodes;
        nodes = new node;
        if (front == NULL && end == NULL)
        {
            nodes->data = val;
            front = nodes;
            end = nodes;
            nodes->next = NULL;
        }
        else{
            nodes->data = val;
            nodes->next = front;
            front = nodes;
        }
    }
    void Display(){
        if (front == NULL && end == NULL)
        {
            cout << "Stack is empty";
        }
        else{
            node *temp = front;
            while (temp != NULL)
            {
                cout << temp->data << ",";
                temp = temp->next;
            }
            cout << endl;

        }
    }
    int pop(){
        if (front == NULL)
        {
            cout << "Stack is empty";
            return 0;
        }
        else{
            node *del = front;
            int ele = del->data;
            front = del->next;
            delete del;
            return ele;
        }
    }
};
int main(){
Stack_Using_Linked_List s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);  
s.Display();
s.pop();
s.Display();

return 0;}