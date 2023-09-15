// 9. WAP in C++ to implement insertion and deletion of node at start,
//  end and nth position in a doubly linked list.
#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next = NULL;
    node*back = NULL;
};
class list{
    public:
    node*head = NULL;
    node*end = NULL;

    void insert(){
        if (head == NULL)
        {
            insert_start();
        }
        else{
        cout << "Enter the element : ";
        int val;
        cin >> val;
        node*current=new node;
        current->data=val;
        current->next = NULL;
        current->back = end;
        end->next = current;
        end = current;}
    }
    void insert_start(){
        cout << "Enter the element : ";
        int val;
        cin >> val;
        node*first=new node;
        first->data=val;
        head = first;
        end = first;

    }
    void nth_position(){
        cout << "Enter the element : ";
        int val;
        cin >> val;
        int pos;
        cout<<"Enter the position to be inserted : ";
        cin>>pos;
        node*temp = head;
        int i = 1;
        while(i!=pos){
            temp = temp->next;
            ++i;
        }
        node*n = new node;
        n->data = val;
        n->back = temp;
        n->next = temp->next;
        temp->next = n;
        temp->next->back = temp;

    }
    void insert_end(){
        cout << "Enter the element : ";
        int val;
        cin >> val;
        node*finish = new node;
        finish -> next = NULL ;
        finish ->data = val;
        finish ->back = end;
        end = finish; 

    }
    void delete_start(){
        node*temp = head;
        head = temp->next;
        head->next->back = NULL;
        delete temp;
    }
    void delete_end(){
        node*temp = end;
        end = temp->back;
        temp->next = NULL;
        delete temp;
    }
    void delete_nth(){
        int pos;
        cout<<"Enter the position to be deleted : ";
        cin>>pos;
        node*temp = head;
        int i = 1;
        while(i!=pos){
            temp = temp->next;
            ++i;
        }
        node*deleted = temp;
        deleted ->back->next = deleted->next;
        deleted ->next->back = deleted->back;
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
};
void double_list(){
    class list o1;
    cout<<"1 - insert\n2 - insert start\n3 - insert end\n4 - insert nth position"
        <<"\n5 - delete start\n6 - delete end\n7 - delete nth position\n8 - display ";
    int choice = 0;
    while(true){
        cin >> choice;
        switch (choice)
        {
        case 1:
            o1.insert();
            break;
        case 2:
            o1.insert_start();
            break;
        
        case 3:
            o1.insert_end();
            break;
        
        case 4:
            o1.nth_position();
            break;
        
        case 5:
            o1.delete_start();
            break;
        case 6:
            o1.delete_end();
            break;
        case 7:
            o1.delete_nth();
            break;
        
        case 8:
            o1.display_node();
            break;
        case 9:
        break;
        default:
        cout << "Enter the valid choice : ";
            break;
        }
    }

}

int main(){
  double_list();

return 0;}
// output:-
// 1 - insert
// 2 - insert start
// 3 - insert end
// 4 - insert nth position
// 5 - delete start
// 6 - delete end
// 7 - delete nth position
// 8 - display 1
// Enter the element : 10
// 1
// Enter the element : 30
// 1
// Enter the element : 20
// 8
// 10 30 20 5
// 8
// 30 20