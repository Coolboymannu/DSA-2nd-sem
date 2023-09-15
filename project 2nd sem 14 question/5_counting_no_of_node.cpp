// 5. WAP in C++ to count the number of nodes in a linked list.
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
    int count_node(){
        node *temp = head;
        int no_of_node=0;
        do{
        no_of_node+=1;
        temp=temp->next;
        }while(temp!=NULL);
    return no_of_node;
    }        
};
int main(){
linked_list o;
o.insert(20);
o.insert(66);
o.insert(83);
o.insert(40);
cout<<"The no of node is :"<<o.count_node();
    return 0;
}

// output:-
// The no of node is :5