#include <iostream>
int search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
        {
            if (key == A[i])
        {
            return i;
        }
        }
        return -1;
    
}
int swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
int improvedLinear(int A[], int len, int key){
    for(int i = 0; i<len; i++){
        if(key==A[i]){
            swap(&A[i],&A[i-1]);
            return i;
        }
    }
    return -1;
}
void display(int A[],int length){
 for(int i=0; i<length; i++){
    std::cout<<A[i]<<" ";
 }
}
int main()
{
    int A[] = {4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(A)/sizeof(A[0]);
    int k;
    std::cout << "Element to be searched: ";
    std::cin >> k;
    std::cout << std::endl;
    // int index = search(A, length, k);
    int index2 = improvedLinear(A,length,k);
    std::cout << "Found at index: " << index2<<std::endl;
    display(A,length);
}