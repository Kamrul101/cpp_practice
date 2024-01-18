#include<iostream>
void display(int A[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << A[i] << " ";
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int isSorted(int A[], int length){
    for(int i=0; i<length-1; i++){
        if(A[i]>A[i+1]){
            return -1;
        }
    }
    return 0;
}


int insertInSorted(int A[], int length, int x){
    int i = length -1;
    while(A[i]>x){
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1]=x;
    length++;
    display(A, length);
}

int negativeOnLeft(int A[], int length){
    int i = 0, j = length - 1;
    while(i<j){
        while(A[i]<0){ i++;}
        while(A[j]>=0){ j--;}
        if(i<j){
            swap(&A[i], &A[j]);
        }
    }
    display(A,length);
}

int main(){
    int A[] = {2, 4, 6, 8, 10, 12, 15, 24, 29, 31, 42};
    int B[] = {-2,4,-6,12,-7,13,-9,8};

    int length = sizeof(A) / sizeof(A[0]);
    int length2 = sizeof(B)/sizeof(B[0]);
    int sorted = isSorted(A,length);
    std::cout<<sorted;
    insertInSorted(A,length,18);
    negativeOnLeft(B,length2);

}