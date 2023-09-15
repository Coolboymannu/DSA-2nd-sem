#include<iostream>
using namespace std;

void Insertion(int *arr ,int size){
    int index ,element ;
    cout<< "Enter the element for insertion"<<endl;
    cin>>element;
    cout<< "Enter the index for insertion"<<endl;
    cin >> index;
    if (index < 0 || index > size)
    {
        cout << "Enter the valed index ";
    }
    else{ 
    for (int i = size; i > index ; i--)
    {
        arr[i-1] = arr[i-2];
    }
    arr[index]= element;
    }
}
void ArrPrin(int *arr , int size ){
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i]<< ",";
    }
    cout << endl;
    
}
int main(){
  int arr[10]={1,2,3,4,5,7,8,9};
  int size = sizeof(arr)/sizeof(int);
//   cout<<size;
  ArrPrin(arr , size);
  Insertion(arr , size);
  ArrPrin(arr , size);
return 0;}