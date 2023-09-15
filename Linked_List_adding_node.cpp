#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
class Linked_List{
    public:
            node *head,*end;
    Linked_List(){
            head = NULL;
    }
    void list_creation(int ele){
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
    void display_list(){
        node *temp = head;
        if (head == NULL)
        {
        cout << "List is empty";
        }
        else{
            while (temp != NULL)
            {
                cout <<temp->data<< ",";
                temp = temp->next;
            }
            
        }
    }
    void adding_node(int ele , int position){
        int i = 1;
        node *temp = head;
        node *add;
        add = new node;
        while (i<=position)
        {
            i++;
            if (i == position)
            {
                add->data = ele;
                add->next = temp->next;
                temp->next = add;
                break;

            }
            temp = temp->next;
        }
        
    }
    };
int main(){
  Linked_List list;
  list.list_creation(12);
  list.list_creation(14);
//   list.display_list();
  list.list_creation(16);
  list.list_creation(13);
  list.list_creation(15);
  list.display_list();
  cout << endl;
  list.adding_node(10,2);
  list.display_list();

return 0;}