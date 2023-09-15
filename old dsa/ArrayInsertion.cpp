#include<iostream>
using namespace std;
int i,index,NewEle;
const int SizeArr=10;
void PrinteArr(int* arr, int size ){
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<',';
    }
    cout<<endl;
    
}
void InsertEle(int *arr , int* size){
    cout<<"Enter the index for inserting element"<<endl;
    cin>>index;
    cout<<"Enter the new element for inserting "<<endl;
    cin>>NewEle;
    for( i = *size; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=NewEle;
    size+=1;

}

int main(){
  int arr[SizeArr]={11,44,6,33,8,56,8};
  int size=sizeof(arr)/sizeof(int);
  PrinteArr(arr,size);
  InsertEle(arr,&size);
  PrinteArr(arr,size);


return 0;}