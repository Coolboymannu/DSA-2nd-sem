// 4. WAP in C++ to perform bubble, insertion, counting and selection sorts.
#include<iostream>
#include<algorithm>
using namespace std;
void count_sort(int arr[], int size) {
    int maxele = arr[0];
    for (int i = 0; i < size; i++) {
        maxele = max(maxele, arr[i]);
    }
    int count_array[maxele + 1] = {0};
    for (int i = 0; i < size; i++) {
        count_array[arr[i]]++;
    }
    for (int i = 1; i <= maxele; i++) {
        count_array[i] += count_array[i - 1];
    }
    int sort_array[size];
    for (int i = size - 1; i >= 0; i--) {
        sort_array[count_array[arr[i]] - 1] = arr[i];
        count_array[arr[i]]--;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = sort_array[i];
    }
}

void insertion_sort(int arr[],int size){
    for(int i = 1 ; i<size ;i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

void display(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
  int arr[5] = {30,20,50,10,40};
  display(arr,5);
  insertion_sort(arr,5);
  display(arr,5);
  int arr1[5] = {30,20,50,10,40};
  display(arr1,5);
  count_sort(arr1,5);
  display(arr1,5);
  int arr2[5] = {30,20,50,10,40};
  display(arr2,5);
  bubbleSort(arr2,5);
  display(arr2,5);
  int arr3[5] = {30,20,50,10,40};
  display(arr3,5);
  insertionSort(arr3,5);
  display(arr3,5);
return 0;}
// output:-
// 30,20,50,10,40,
// 10,20,30,40,50,
// 30,20,50,10,40,
// 10,20,30,40,50,
// 30,20,50,10,40,
// 10,20,30,40,50,
// 30,20,50,10,40,
// 10,20,30,40,50,