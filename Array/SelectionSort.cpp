#include<iostream>
using namespace std;

void DisArr(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
void SelectionSort(int *arr , int size){
    int small_val , temp;
    for (int i = 0; i < size; i++)
    {
        small_val = i ;
        for (int j = i; j < size; j++)
        {
            if (arr[small_val]>arr[j])
            {
                small_val = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[small_val];
        arr[small_val] = temp;
    }
}

int main(){
  int arr[] = {4,3,6,9,2,1,1,7,8,5};
  int size = sizeof(arr) / sizeof(int);
  DisArr(arr , size);
  SelectionSort(arr , size);
  DisArr(arr , size);
return 0;}