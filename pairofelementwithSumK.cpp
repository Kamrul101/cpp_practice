#include<iostream>
int pairOfSum(int A[], int length, int k){
 for(int i = 0; i<length -1; i++){
    for (int j = i+1; j < length; j++)
    {
        if((A[i]+A[j])==k){
            std::cout<<i<<" "<<j<<std::endl;
        }
    }
    
 }
}

int pairOfSumHash(int A[], int length, int k){
    int i;
    int lower = A[0];
    int higher = A[0];
    for(i = 0; i<length; i++){
        if(A[i]<lower){
            lower = A[i];
        }
        if(A[i]>higher){
            higher = A[i];
        }
    }
    int size= higher + 1;
    int H[size] = {0};
    for(i=0;i<length; i++){
        if((H[k-A[i]]) != 0){
            std::cout<<i<<" "<<H[k-A[i]-lower]<<std::endl;
        } 
        H[A[i]]++;
    }
}
int main(){
    int k;
    int B[] = {8,3,6,4,5,2,7,15,-2,12};
    int length2 = sizeof(B)/sizeof(B[0]);
    std::cout<<"What would be the sum: ";
    std::cin>>k;
    std::cout<<std::endl;
    // pairOfSum(B,length2,k);
    pairOfSumHash(B,length2,k);

}