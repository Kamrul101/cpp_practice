#include<iostream>

int multipleMissing(int A[], int length){
    int i;
    int lower = A[0];
    int diff = lower - 0; 
    for(i= 0; i<length; i++){
        if((A[i]-i)!= diff){
            while(diff<(A[i]-i)){
                std::cout<<i+diff<<" ";
                diff++;
                
            }
            
        }
    }

}

int multipleMissingForUnsorted(int A[], int length){
    int i;
    int lower  = A[0];
    int higher = A[0];
    for(i = 1; i<length;i++){
        if(A[i]< lower){
            lower = A[i];
        }
        if(A[i]> higher){
            higher = A[i];
        }
    }
    // std::cout<<lower<<" "<<higher;
    int size = higher;
    int H[size]= {0};
    for(i=0; i<length; i++){
        H[A[i]]++;
    }
    for(i = lower; i<=higher; i++){
        if(H[i]==0){
            std::cout<<i<<" ";
        }
    }

    //this method gives smaller size
    // int size = higher - lower + 1;
    // int H[size] = {0}; // Initialize the array with zeros

    // // Mark elements as present
    // for (int i = 0; i < length; i++) {
    //     H[A[i] - lower]++;
    // }

    // // Print missing elements
    // for (int i = 0; i < size; i++) {
    //     if (H[i] == 0) {
    //         std::cout << i + lower << " ";
    //     }
    // }

}


int main(){
    int A[] = {3,4,5,6,7,9,10,11,14,15};
    int B[] = {4,7,3,9,12,11,6,8};
    int length = sizeof(A)/sizeof(A[0]);
    int length2 = sizeof(B)/sizeof(B[0]);
    // multipleMissing(A,length);
    multipleMissingForUnsorted(B,length);
}