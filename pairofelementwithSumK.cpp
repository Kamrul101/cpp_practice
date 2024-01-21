#include<iostream>
int pairOfSum(int A[], int length, int k){
 for(int i = 0; i<length -1; i++){
    for (int j = i+1; j < length; j++)
    {
        if((A[i]+A[j])==k){
            std::cout<<A[i]<<" "<<A[j]<<std::endl;
        }
    }
    
 }
}
int main(){
    int k;
    int B[] = {8,3,6,4,5,2,7};
    int length2 = sizeof(B)/sizeof(B[0]);
    std::cout<<"What would be the sum: ";
    std::cin>>k;
    std::cout<<std::endl;
    pairOfSum(B,length2,k);

}