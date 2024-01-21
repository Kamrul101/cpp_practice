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

int countingDuplicateHash(int A[], int length){
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
    int H[higher] = {0};
    for(i = 0; i<length;i++){
        H[A[i]]++;
    }
    for(i = 0; i<higher; i++){
        if(H[i]>1){
            std::cout<<i<<" "<<H[i]<<std::endl;
        }
    }
}

int duplicateUnsorted(int A[], int length){
    for(int i= 0; i<length -1; i++){
        int count = 1;
        if(A[i]!= -1){
            for(int j = i+1; j<length; j++){
                if(A[i]==A[j]){
                    count++;
                    A[j] = -1;
                }
            }
        }
        if(count> 1){
            std::cout<<A[i]<<" "<<count<<std::endl;
        }
    }
}

int main()
{
    int A[] = {3, 4, 4, 5, 6, 7, 9, 10, 10, 10, 15};
    int B[] = {8,3,6,4,6,5,6,8,2,7};
    int length = sizeof(A) / sizeof(A[0]);
     int length2 = sizeof(B)/sizeof(B[0]);
    // duplicateSorted(A, length);
    // countingDuplicatesSorted(A,length);
    // countingDuplicateHash(A,length);
    duplicateUnsorted(B, length2);
}