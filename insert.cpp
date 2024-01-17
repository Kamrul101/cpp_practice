#include<iostream>
#include<bits/stdc++.h>
//insert append delete
void append(int A[], int &length,int x){
 A[length] = x;
 length++;
}

void insert(int A[],int &length, int index, int x){
    for(int i=length;i>index; i--){
        A[i]=A[i-1];
    }
    A[index]=x;
    length++;
}
void deleted(int A[], int &length, int index){
    int x = A[index];
    for(int i=index; i<length-1; i++){
        A[i]=A[i+1];
    }
    length--;
}
void display(int A[],int length){
 for(int i=0; i<length; i++){
    std::cout<<A[i]<<" ";
 }
}

int main(){
    int arr[] = {2,3,4,5,6};
    
    // std::cin<<x;
    int length = sizeof(arr)/sizeof(arr[0]);
    // std::cout<<length<<std::endl;
    append(arr,length,7);
    insert(arr, length,3,9);
    deleted(arr, length,3);
    
    display(arr, length);

}