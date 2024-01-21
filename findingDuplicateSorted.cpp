#include <iostream>

int duplicateSorted(int A[], int length)
{
    int lastDuplicate = 0;
    for (int i = 0; i < length; i++)
    {
        if ((A[i] == A[i + 1]) && (A[i] != lastDuplicate))
        {
            std::cout << A[i]<<" ";
            lastDuplicate = A[i];
        }
    }
}

int countingDuplicatesSorted(int A[],int length){
    int i,j;
    for(i = 0; i<length ;i++){
        if(A[i] == A[i+1]){
            j = i +1;
            while (A[j]==A[i])
            {
                j++;
            }
            std::cout<<A[i]<<" "<<j-i<<std::endl;
            i = j-1;
            
        }
    }
}

int main()
{
    int A[] = {3, 4, 4, 5, 6, 7, 9, 10, 10, 10, 15};

    int length = sizeof(A) / sizeof(A[0]);
    // duplicateSorted(A, length);
    countingDuplicatesSorted(A,length);
}