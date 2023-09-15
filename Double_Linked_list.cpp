#include<iostream>
using namespace std;

struct node
{
    int data;
    node *forword;
    node *backword;

};
node *start_ptr = NULL,*end_ptr = NULL;

void list_creation(int ele){
    node *list_make;
    list_make = new node;
    if(start_ptr == NULL && end_ptr == NULL){
    list_make->data = ele;
    start_ptr = list_make;
    end_ptr = list_make;
    list_make->backword = NULL;
    list_make->forword= NULL;}
    else{
        list_make->data = ele;
        list_make->backword = end_ptr;
        end_ptr->forword = list_make;
        list_make->forword = NULL;
        end_ptr = list_make;
    }

}

void for_dis(){
    node *temp;
    temp = start_ptr;
    while (true)
    {
        cout << temp->data << ",";
        if (temp->forword == NULL)
        {
            break;
        }
        temp = temp->forword;
        
    }
    
}
void back_dis(){
    node *temp;
    temp = end_ptr;
    while (true)
    {
        cout << temp->data << ",";
        if (temp->backword == NULL)
        {
            break;
        }
        temp = temp->backword;
        
    }
}
int main(){
  list_creation(10);
  list_creation(20);
  list_creation(30);
  list_creation(40);
  list_creation(50);
  for_dis();
  cout << endl;
  back_dis();
return 0;}