/*2. WAP in C++ to search a particular node in given singly linked list.*/
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
    bool search_node(int val){
        node *temp = head;
        do{
            if (temp->data==val)
            {
                return true;
            }
            temp=temp->next;
        }while(temp!=NULL);
        return false;
    }        
};
int main(){
linked_list o;
o.insert(20);
o.insert(53);
o.insert(66);
o.insert(83);
o.insert(40);
if(o.search_node(53)){
    cout<<"node found";}
else{
    cout<<"not found";
}
    return 0;
}
// output:-
// node found
