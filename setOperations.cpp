#include<iostream>
void display(int A[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << A[i] << " ";
    }
}
int UnionSortedArray(int A[],int B[], int len1, int len2){
    int i= 0, j= 0,k=0;
    int C[len1 + len2];
    while(i<len1 && j<len2){
        if(A[i] < B[j]){
            C[k++]=A[i++];
        }
        else if(A[i]> B[j]){
            C[k++] = B[j++];
        }
        else{
            C[k++] = B[j++];
            i++;
        }
    }
    for(;i<len1;i++){C[k++]= A[i++];}
    for(;j<len2;j++){C[k++]= B[j++];}

    display(C,k);
}

int UnionUnsortedArray(int A[],int B[], int len1, int len2){
    int i= 0, j= 0,k=0;
    int C[len1 + len2];
    for(;i<len1;i++){
        C[k++]=A[i];
    }
    for(;j<len2;j++){
        bool found = false;
        for(;i<k;i++){
            if(B[j]==C[i]){
                found = true;
                break;
            }
        }
        if(!found){
            C[k++] = B[j];
        }
    }
    display(C,k);
}

int IntersectionUnsortedUnique(int A[],int B[], int len1, int len2){
    int i= 0, j= 0,k=0;
    int C[len1 + len2];
    for(i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(A[i]==B[j]){
                C[k++] = A[i++];   
            }
        }
    }
    display(C,k);
}
int InterSectionSorted(int A[],int B[], int len1, int len2){
    int i= 0, j= 0,k=0;
    int C[len1 + len2];
    while(i<len1 && j<len2){
        if(A[i] < B[j]){
            i++;
            
        }
        else if(A[i]> B[j]){
            
            j++;
        }
        else{
            C[k++] = B[j++];
            i++;
        }
    }

    display(C,k);
}

int main(){
    int A[] = {2,4,12,15,19};
    int B[] = {4,12,12,15,17,19};
    int length1 =  sizeof(A)/sizeof(A[0]);
    int length2 =  sizeof(B)/sizeof(B[0]);
    // UnionSortedArray(A,B,length1,length2);
    // UnionUnsortedArray(A,B,length1,length2);
    // IntersectionUnsortedUnique(A,B,length1,length2);
    InterSectionSorted(A,B,length1,length2);
}