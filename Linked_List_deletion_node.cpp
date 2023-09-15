#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class List
{
private:
    node *first , *end;
public:
List(){
    first = NULL;
}
void ListCreation(int element){
    node *current;
    if(first == NULL){
        first = new node;
        first->data = element;
        first->next = NULL;
        end = first;}
    else{
        current = new node ;
        current->data = element;
        current->next = NULL;
        end->next = current;
        end = current;
    }
}
void ListDisplay(){
    if (first == NULL)
    {
        cout << "List is empty";
    }
    else{
        node *current;
        current = first;
        do
        {
            cout << current->data << ",";
            current = current->next;
        }
        while (current != NULL);
        
    }
    
}
void Deletion(int ele){
    node* temp = first;
    node* linkend;
    do{
        if (temp->data != ele)
        {
            linkend = temp;
            temp = temp->next;
        }
        else{
            linkend->next = temp->next;
            delete temp;
            break;
        }
    }while (temp->next  != NULL);
}

};

int main(){
  List num;
  num.ListCreation(1);
  num.ListCreation(2);
  num.ListCreation(3);
  num.ListCreation(4);
  num.ListCreation(5);
  num.ListCreation(6);
num.ListDisplay();
num.Deletion(6);
cout << endl;
num.ListDisplay();
return 0;}