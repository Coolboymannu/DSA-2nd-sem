// 8. WAP in C++ to copy elements of a linked list to another linked list.
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
        void copy_list(node* Ohead){
            node*temp = Ohead;
            if(temp==NULL){
                cout<<"Original list is Empty"<<endl;
            }
            else{
                while(temp != NULL ){
                insert(temp->data);
                temp=temp->next;}
            }
        }
};
int main(){
  linked_list original_list;
original_list.insert(20);
original_list.insert(53);
original_list.insert(66);
original_list.insert(83);
original_list.insert(40);
original_list.display_node();
linked_list copy_list;
copy_list.copy_list(original_list.head);
cout<<"Copied List:"<<"\n";
copy_list.display_node();
return 0;}
// output:-
// 20 53 66 83 40 Copied List:
// 20 53 66 83 40