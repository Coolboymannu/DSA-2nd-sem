#include<iostream>
using namespace std;
int front = 0 , ele;
int arr[10] ;
int size = sizeof(arr) / sizeof(int);

bool isFull(){
    if( front == (size - 1)){
        return true;
    }
    return false;
}

bool isEmpty(){
    if( front == 0){
        return true;
    }
    return false;
}

void push(){
    if(isFull()==false)
    {ele = 0;
    cout << "Enter the element for inserting";
    cin >> ele;
    arr[front] = ele;
    front++;
    }
    else{cout << "Stack is full";}
}

void pop(){
    if(isEmpty() == false){
    front--;
    ele = 0;
    ele = arr[front];
    cout << ele;
    }
    else{cout << "Stack is empty";}
}

int peek(){
    return arr[front - 1];
}
int main(){
    cout << "1. push\n2. pop\n3. peek\n4. exit";
    int choice = 0;
    while (choice!= 4){
        cout << "\n--->";
    cin >> choice;
    switch (choice)
    {
    case 1:
        push();
        break;
    
    case 2:
        pop();
        break;
    
    case 3:
        cout << peek();
        break;
    
    default:
        cout << "Enter a valed choice";
        break;
    
    }};
    
// int *arrptr;
// arrptr = new int[10];
// delete arrptr;
return 0;}