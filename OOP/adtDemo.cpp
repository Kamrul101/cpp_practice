#include<iostream>
class Array{
    public:
        int *A;
        int size;
        int length;
    
        Array(){
            size = 10;
            length = 10;
            A = new int(size);
        }
        Array(int size){
            this->size= size;
            this->length= length;
            A = new int(size);
        }
        ~Array(){
            delete []A;
        } 
        void Display();
};

void Array::Display(){
    std::cout<<"Elements are: ";
    for(int i=0; i<length; i++){
        std::cout<<A[i]<<" ";
    }
}

int main(){
    Array *arr;
    int size,n;
    std::cout<<"Enter size of array: ";
    std::cin>>size;
    arr = new Array(size);
    std::cout<<" Enter numbers of array:";
    std::cin>>n;
    for(int i=0; i<n;i++){
        std::cin>>arr->A[i];
        arr->length++;
    }
    arr->Display();
    return 0;
}

