#include<iostream>
int binarySearch(int A[], int length, int key){
    int low= 0;

    int high = length - 1;
    while(low<=high){
        int mid = (low + high)/2;
        if(key==A[mid]){
            return mid;
        }
        else if(key<A[mid]){
            high = mid -1;
        }
        else {
            low = mid +1;
        }

    }
    return -1;
}
 int main(){
    int A[] ={2,4,6,8,10,12,15,24,29,31,42};
    int length = sizeof(A)/sizeof(A[0]);
    int k;
    std::cout<<"Enter value to find in array: "<<std::endl;
    std::cin>>k;
    int index = binarySearch(A,length,k);
    if(index>=0){
        std::cout<<"Found at index: "<<index<<std::endl;
    }
    else{
        std::cout<<"Search unsuccessful."<<std::endl;
    }
 }