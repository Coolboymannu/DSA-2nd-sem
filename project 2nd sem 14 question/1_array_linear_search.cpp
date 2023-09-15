/*1. WAP in C++ to find a particular element in a given array location of a given
element using linear search. 
*/
#include<iostream>
using namespace std;
int linear_search(int*arr,int size){
    int num;

    cout<<"Enter the number you want to search: ";
    cin>>num;
    for (int i=0 ;i<=size; ++i){
        if (num==arr[i])
        {
            return i;
        }
    }
    cout<<"\nElement not found";
    return 0;
}
int main() {
    int arr[] = {2,4,6,8,9};
    int size=sizeof(arr)/ sizeof(int);
    cout<<linear_search(arr,size);

return 0;}
// output:-
// Enter the number you want to search: 8
// 3