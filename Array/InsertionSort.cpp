#include<iostream>
using namespace std;

void DisArr(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
void InsertionSort(int *arr , int size){
    int temp = 0;
    for (int i = 1; i < size; i++)
    { temp = arr[i] ;
        for (int j = i; j > 0 && temp < arr[j-1]; j--)
        {
            
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
        
    }
    
}


int main(){
  int arr[] = {4,3,6,9,2,1,7,8,5};
  int size = sizeof(arr) / sizeof(int);
  DisArr(arr , size);
  InsertionSort(arr , size);
  DisArr(arr , size);

return 0;}