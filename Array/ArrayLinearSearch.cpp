#include<iostream>
using namespace std;
void DisArray(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] << ",";
    }
    cout << endl;
}
int LinearSearch(int *arr , int size){
    cout << "Enter the element for searching ";
    int element ;
    cin >> element;
    for (int  i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        
    }
    
}

int main(){
  int arr[] = {12,80,99,23,44,89 };
int size = sizeof(arr)/sizeof(int);
DisArray(arr, size);
int index = LinearSearch(arr, size);
cout << "The element is found on " << index;
return 0;}