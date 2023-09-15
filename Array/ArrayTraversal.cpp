#include<iostream>
using namespace std;
int i=0,element;
// Array taversal 
void ElementAdd(int *arr){
    for ( i = 0; i < 10; i++)
    {
        cout<<"Enter the elenment";
        cin>>arr[i];
    }
    
}
void Elementprint(int *arr){
    for ( i = 0; i < 10 ; i++)
    {
        cout<<arr[i]<<",";
    }

} 

int main(){
  int array[10];
  ElementAdd(array);
  Elementprint(array);
return 0;}