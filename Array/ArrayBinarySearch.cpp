// for binary search there is a condition 
//     array must be sorted
#include<iostream>
using namespace std;
void DisArray(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] << ",";
    }
    cout << endl;
}
int BinarySearch(int *arr, int start, int end,/*int size */int element){
    int mid = (start + end)/2 ;
  if (arr[mid] == element)
  {
    return mid;
  }
  else if(mid == 0) {
    cout << "Enter the valid element";
  }
  else if (arr[mid] > element)
  {
    BinarySearch(arr,0,mid,element);
  }
  else if(arr[mid] < element) {
    BinarySearch(arr,mid,end,element);
  }
  
}
int main(){
                        // 0  1  2  3  4  5  6  7  8
  int element , array[] = {1,23,34,53,56,77,89,90,96};

  int size = sizeof(array)/sizeof(int);
  DisArray(array, size);
  cout << "Enter the element to find :";
  cin >> element;
  int index = BinarySearch(array,0,8,element);
  cout << "Element found on " <<index<<"th index";
return 0;}