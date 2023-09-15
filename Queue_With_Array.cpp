#include<iostream>
using namespace std;
int arr[10];
int rear = 0 ,front = -1 , size = 0;
bool isEmpty(){
    if ((front - rear) == -1)
    {
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if (rear == 10)
    {
        return true;
    }
    else{
        return false;
    }
}
int peek(){
    return arr[front + 1];
}
void sifting(){
    int temp = front;
    for (int i = 0; i <= (rear - front); i++)
    {
        arr[i] = arr[temp];
        temp++;
    }
    front = -1;
}
void enqueue(){
    if(!(isFull())){
    cout << "Enter the number for inserting :";
    int ele;
    cin >> ele;
    arr[rear] = ele;
    rear++;}
    else{
        cout << "Queue is full";
    }
}
int dequeue(){
    if(!(isEmpty())){
    front++;
    return arr[front];}
    else{
        cout << "Queue is empty";
        return 0;
    }
}
void displayqueue(){
    
    for (int i = (front+1) ; i < rear; i++) 
    { 
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main(){
int choice = 0;
cout<<"1. Add element(enqueue)\n2. Delete element(dequeue)\n3. Peek\n4. Display all element\n5. Exit";
while (choice != 5)
{
    cout << "\n---->";
    cin >> choice;
    if (front != 0 && rear == 10)
    {
        sifting();
    rear = rear - front + 1;

    }
    
    switch (choice)
    {
    case 1:
        enqueue();
        break;
    
    case 2:
        cout << dequeue();
        break;
    
    case 3:
        cout << peek();
        break;
    
    case 4:
        displayqueue();
        break;
    
    default:
        cout << "Enter the valid choice";
        break;
    }
}

return 0;}