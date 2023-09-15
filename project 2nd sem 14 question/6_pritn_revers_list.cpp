// 6. WAP in C++ to print elements of a linked list in reverse order.
#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next=NULL;
};
class linked_list{
    public:
    node *head=NULL;
    node *end=NULL;
        void insert(int ele){
            if(head == NULL){
            head = new node;
            head->data = ele;
            head->next = NULL;
            end = head;
            }
            else{
                node *current;
                current = new node;
                current->data = ele;
                current->next = NULL;
                end->next = current;
                end = current;
            }
        }
        void display_node(){
            node*temp = head;
            if (temp==NULL)
            {
                cout<<"List is empty";
                return;
            }
            do{
                cout<< temp -> data << " ";
                temp = temp -> next;
            }while (temp!=NULL);
        } 
        void printReverse(node* head)
    {
            if (head == NULL){
            return;}
            else{printReverse(head->next);
            }
            cout << head->data << " ";
        }
};
int main(){
  linked_list o;
o.insert(20);
o.insert(53);
o.insert(66);
o.insert(83);
o.insert(40);
o.display_node();
cout<<"\nOriginal list in reverse order:"<< endl ;
o.printReverse(o.head);
return 0;}
// output:-
// 20 53 66 83 40 
// Original list in reverse order:
// 40 83 66 53 20