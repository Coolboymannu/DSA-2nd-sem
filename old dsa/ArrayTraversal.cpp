#include<iostream>
using namespace std;

int traversal(int* ar,int size){
    for (int  i = 0; i < size; i++)
    {
        cout<<ar[i]<<',';
    }
    
}
 
int main(){
  cout<<"ArraySorting"<<endl;
  int arr[]={12,5,4,5,6,7,8,9};
  int size=sizeof(arr)/sizeof(int);
traversal(arr,size);
return 0;}