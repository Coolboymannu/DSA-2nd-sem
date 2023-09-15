#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};

class Adition{
    public:
    int val1;
    node *front = NULL,*end = NULL;
    node *fronta = NULL,*enda = NULL;
    // friend void addition(Adition, Adition);
    Adition(int v1){
        val1 = v1;
    }
    void store_digite();
    void push(int);
    void pusha(int);
    int pop();
    void addition(Adition, Adition);
    void Display();
};
void Adition::push(int val){
    node *nod;
    if (front == NULL && end == NULL)
    {
        nod = new node;
        nod->data = val;
        end = nod;
        front = nod;
        nod->next = NULL;
    }
    else{
        nod = new node;
        nod->data = val;
        nod->next = front;
        front = nod;

    }
}
void Adition::pusha(int val){
    node *nod;
    if (fronta == NULL && enda == NULL)
    {
        nod = new node;
        nod->data = val;
        enda = nod;
        fronta = nod;
        nod->next = NULL;
    }
    else{
        nod = new node;
        nod->data = val;
        nod->next = fronta;
        fronta = nod;

    }
}
int Adition::pop(){
    node *del = front;
    int ele = del->data;
    front = del->next;
    delete del;
    return ele;
    
}
void Adition::store_digite(){
    int iw,size = 0, *arr;
    while (iw <= 6)
    {
    // size++;
    arr = new int;
        int c = val1%10;
        val1 /=10;
        // push(c);
        // arr[size] = c;
        *arr = c;
        if (val1 == 0)
        {
            break;
        }
    iw++;
    }
    int i = 0;
    while (arr)
    {

        push(arr[i]);
        i++;
    }
    
}
void Adition::addition(Adition o1 , Adition o2){
    int d1,d2 ,a ,d = 0;
    int *arr;
    while (true)
    {
        //  a = 0;
         d1 = o1.pop();
         d2 = o2.pop();
         a = d1 + d2 + d;
         if ((a/10) == 0)
         {
            arr = new int;
            *arr = a;
            a = 0;
         }
         else{
            d = 0;
            arr = new int;
            *arr = a%10;
            // arr = new int;
            d = a/10;
            // *arr = a;
            a = 0;
         }
         
    }
    int i = 0;
    while (arr)
    {
        pusha(arr[i]);
        i++;
    }
    
    
}
void Adition::Display(){
        if (fronta == NULL && enda == NULL)
        {
            cout << "Stack is empty";
        }
        else{
            node *temp = fronta;
            while (temp != NULL)
            {
                cout << temp->data << ",";
                temp = temp->next;
            }
            cout << endl;

        }
    }
int main(){
Adition a(111);
Adition a2(111);
a.store_digite();
a2.store_digite();
a2.addition(a,a2);
a2.Display();

return 0;}