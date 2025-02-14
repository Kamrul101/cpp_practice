#include<iostream>

int singleMissingELemForFirstN(int A[], int length){
    int i, sum= 0;
    int n = A[length - 1];
    for(i=0;i<length;i++){
        sum = sum + A[i];
    }
    int sumNatural = (n * (n+1))/ 2;
    int missing = sumNatural - sum;
    return missing;
}

int singleMissingForAnyPointNatural(int A[], int length){
    int i;
    int lower = A[0];
    int diff = lower - 0;
    for(i = 0; i<length; i++){
        if((A[i]-i) != diff){
            return i+diff;
            break; 
        }
    }
}


int main(){
    int A[] = {1,2,3,4,5,6,7,9,10,11};
    int B[] = {4,5,6,7,8,9,11};
    int length = sizeof(A)/sizeof(A[0]);
    int length2 = sizeof(B)/sizeof(B[0]);
    
    std::cout<<singleMissingELemForFirstN(A,length)<<std::endl;
    std::cout<<singleMissingForAnyPointNatural(B,length2);

}