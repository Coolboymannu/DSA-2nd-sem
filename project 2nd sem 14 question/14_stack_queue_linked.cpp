/*14. WAP in C++ of implementation of 
stack and queue using linked list.*/
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*next=NULL;
};

class stack{
	public:
	node*top=NULL;
	void push(int val){
		if(top==NULL){
			node*base = new node;
			base -> data=val;
			base -> next=NULL;
			top = base;
		}
		else{
			node*newtop = new node;
			newtop -> data=val;
			newtop -> next = top;
			top = newtop;}
	}
	int pop(){
		if(top==NULL){
			cout<<"Stack is empty";
			return 0;}
		else{
			node*temp = top;
			int d = temp->data;
			top=top->next;
			delete temp;
			return(d);}
	}
	void display(){
		node*temp = top;
		if(temp == NULL){
			cout<<"Stack is empty";
		}
		else{
	    	do{
	     	 	cout<<temp->data<<"  ";
      			temp = temp -> next;
	    	}while(temp != NULL);
		}cout<<endl;}
};
void stack(){
	class stack s;
	int choice;
	cout<<"1 - push\n2 - pop\n3"
	    <<" - display\n4 - exit\n";
	while(true){
		cin>>choice;
	switch(choice){
		case 1:
		int d;
		cout<<"Enter the number : ";
		cin>>d;
		s.push(d);
		break;
		case 2:
		cout<<s.pop()<<" \n";
		break;
		case 3:
		s.display();
		break;
		case 4:
		return;
		break;
	default:
	cout<<"Enter the valid choice : ";
	}	}	
}
int main(){
		stack();
		
	return 0;
}
// output:-
// 1 - push
// 2 - pop
// 3 - display
// 4 - exit
// 1
// Enter the number : 10
// 1
// Enter the number : 20
// 1
// Enter the number : 30
// 3
// 30  20  10
// 2
// 30
// 3
// 20  10
// 4
