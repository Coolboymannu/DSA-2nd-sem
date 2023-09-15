#include<iostream>
using namespace std;
void DisArr(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
void BubbleSort(int *arr , int size){
    int temp;
    for (int i = 0; i < size; i++)
    {   
        for (int i = 0; i < (size -1); i++)
        {
         if (arr[i] > arr[i+1])
             {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
             }
         
    }
    }
}

int main(){
  int arr[] = {55 , 22 , 4 , 44 , 8 , 99 , 1 ,7, 76};
  int size = sizeof(arr) / sizeof(int); 
  DisArr(arr , size);
  BubbleSort(arr , 8);
  DisArr(arr , size);
return 0;}