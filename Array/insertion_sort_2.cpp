#include<iostream>
using namespace std;
void DisArr(int *arr , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
void InsertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Move elements greater than temp one position ahead
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place temp in the correct position
        arr[j + 1] = temp;
    }
}

int main(){
  int arr[] = {4,3,6,5,2,1,};
  int size = sizeof(arr) / sizeof(int);
  DisArr(arr , size);
  InsertionSort(arr , size);
  DisArr(arr , size);

return 0;}