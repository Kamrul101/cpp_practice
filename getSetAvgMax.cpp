#include <iostream>

int get(int A[], int index, int length)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    }
    else return -1;
}

int set(int A[], int index, int length, int x)
{
    if (index >= 0 && index < length)
    {
         return A[index] = x;
    }
    else return -1;
}
int max(int A[], int length)
{
    int max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
int min(int A[], int length)
{
    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}
int average(int A[], int length){
    int total = 0;
    for(int i=0; i<length; i++){
        total = total + A[i];
    }
    return total/length;

}
void display(int A[],int length){
 for(int i=0; i<length; i++){
    std::cout<<A[i]<<" ";
 }
}
int main()
{
    int A[] = {6, 12, 8, 13, 16, 10, 9};
    int length = sizeof(A) / sizeof(A[0]);
    std::cout<<"Which index value you need? ";
    int index,indexSet,value;
    std::cin>>index;
    std::cout<<std::endl;
    int indexValue = get(A,index,length);
    std::cout<<indexValue<<std::endl;
    
    std::cout<<"Which index value you want change and what is the value ? ";
    std::cin>>indexSet>>value;
    std::cout<<std::endl;

    set(A,indexSet,length,value);
    display(A,length);
    std::cout<<std::endl;
    int Maximum = max(A,length);
    std::cout<<"Maximum value: "<<Maximum<<std::endl;
    int Minimum = min(A,length);
    std::cout<<"Minimum value: "<<Minimum<<std::endl;

    int Average = average(A,length);
    std::cout<<"Average is: "<<Average;

}