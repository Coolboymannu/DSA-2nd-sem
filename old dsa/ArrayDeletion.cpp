#include<iostream>
using namespace std;
int i,index=0; 
// // // c
 int DeleteElement(int *arr , int size , int del_ele){
    for (i = 0; i < size; i++)
    {
        if (arr[i]==del_ele)
        {
            index=i;
        }
        
    }
    for (i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<endl;
    return (size-1);
    
 }
 void PrinteArr(int* arr, int size ){
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<',';
    }
    
}
int main(){
  int arr[]={14,32,44,66,50,60};
  int size=sizeof(arr)/sizeof(int);
  cout<<"Enter the element that you want to delete "<<endl;
  int del_ele;
  cin>>del_ele;
  PrinteArr(arr , size );
  size=DeleteElement(arr , size ,del_ele);
  PrinteArr(arr , size );

return 0;}