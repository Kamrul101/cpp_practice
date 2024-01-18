#include<iostream>

void display(int A[],int length){
 for(int i=0; i<length; i++){
    std::cout<<A[i]<<" ";
 }
}

void swap(int *x, int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int reverse(int B[],int length){
    int A[length], j , i;
    for(i = 0, j= length -1;j>= 0; i++ , j-- ){
        A[i]= B[j];
    }
    for(i = 0; i<length; i++){
        B[i] = A[i];
    }
    display(B, length);
}

int reverse2(int A[], int length){
    for(int i = 0, j= length -1; i<j; i++, j--){
        swap(&A[i], &A[j]);
    }
    display(A,length);
}

int leftShiftRotate(int A[], int length, int k){ //k is the input value if user want to make for kth term
    //left rotation for kth value 
    for(int i = 1; i <= k ; i++){
    //left rotation for only 1st element
    int temp = A[0];
    for(int i = 0; i<length -1; i++){
        A[i] = A[i+1];
    }
    A[length - 1] = temp;
    }
    

    display(A, length);
}

int main(){
    int A[] ={2,4,6,8,10,12,15,24,29,31,42};
    int length = sizeof(A)/sizeof(A[0]);
    int n;
    // reverse(A, length);
    // reverse2(A, length);
    std::cout<<"For how many elements you want to rotate: ";
    std::cin>>n;
    std::cout<<std::endl;
    leftShiftRotate(A, length,n);
    
}