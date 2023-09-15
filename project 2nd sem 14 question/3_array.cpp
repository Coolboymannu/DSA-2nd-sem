// 3. WAP in C++ to perform insertion, deletion,
//  updation of an element and traversal in an array.
#include<iostream>
using namespace std;
void display(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<",";
    }
    
}//traversal
void deletion(int*arr,int size,int ele){
    if (size!=0)
    {
        int i;
        for ( i = 0; i < size; i++)
        {
            if (arr[i]==ele)
            {
                break;
            }
        }
        for (int j = i; j < size; j++)
        {
            arr[j]=arr[j+1];
        }
    }else{cout<<"Array is empty";}   
}
void insert(int *arr,int size,int val,int index){
    for (int i = size-1; i > index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index]=val;

}
int updation(int *arr,int size,int ele,int update){
    if (size!=0)
    {
        int i;
        for ( i = 0; i < size; i++)
        {
            if (arr[i]==update)
            {
                break;
            }
        
        }
        arr[i]=ele;
        return 0;
    }else{cout<<"Array is empty";}   
}
int main(){
    int array[10]={10,20,40,60,70,80,90};
    int size = sizeof(array)/sizeof(int);
    display(array,size);
    insert(array,size,50,3);cout<<endl;
    display(array,size);
    deletion(array,size,70);cout<<endl;
    display(array,size);cout<<endl;
    updation(array,size,30,20);
    display(array,size);

    return 0;
}
// output:-
// 10,20,40,60,70,80,90,0,0,0,
// 10,20,40,50,60,70,80,90,0,0,
// 10,20,40,50,60,80,90,0,0,10,
// 10,30,40,50,60,80,90,0,0,10,