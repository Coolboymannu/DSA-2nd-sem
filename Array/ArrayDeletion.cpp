#include<iostream>
using namespace std;
void PriArr(int *arr , int size){
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
void ElementSiftinga(int *arr, int index, int size){
    for (int i = index; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
void DeletionEle(int *arr, int size){
    int algo;
    cout << "Enter the algorithem for deletion \n"
         <<"1 for deletion through index \n2 for deletion through element \n";
    cin >> algo;
    int index=0;
    switch (algo)
    {
    case 1 :
        cout << "Enter the index :";
        cin >> index;
        ElementSiftinga(arr ,index , size );
        PriArr(arr , size-1);
        break;
    case 2 :
        int element;
        cout << "Enter the element :";
        cin >> element;
        for (int i = 0; i < size; i++)
        {
            if (arr[i]==element)
            {
                index=i;
            }            
        }
        ElementSiftinga(arr , index , size);
        PriArr(arr , size-1);
        break;
    
    default:
        cout << "Enter the valid algo";
        break;
    }
    
    
}
int main(){
  int arr[]= {12,44,5,33,1,9,7,66};
int size = sizeof(arr)/sizeof(int);
PriArr(arr , size);
DeletionEle(arr ,size);

return 0;}