#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next = NULL;
};
node *heado ,*endo ;
void cercular_list(int ele){
    node *nod;
// node *head = heado ,*end = endo ;
    nod = new node;
    if (heado == NULL)
    {
        nod->data = ele;
        heado = nod;
        endo = nod;
    }
    else{
        nod->data = ele;
        endo->next = nod;
        nod->next = heado;
        endo = nod;
    }
}
void display(int time){
    node *temp = heado;
    for (int i = 0; i < time; i++)
    {
        cout << temp->data << ",";
        temp = temp->next;
    }
    

}

int main(){
cercular_list(10);
cercular_list(20);
cercular_list(30);
cercular_list(40);
cercular_list(50);
display(10000000000);
return 0;}