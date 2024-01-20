#include<iostream>
void display(int A[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << A[i] << " ";
    }
}
int merging(int A[], int B[], int length1, int length2){
    int i = 0, j= 0, k= 0;
    int length3 = length1 + length2;
    int C[length3];

    while(i< length1 && j< length2){
        if(A[i]<B[j]){
            C[k] = A[i];
            i++;
            k++;
            //C[k++] = A[i++] same as incrementing later
            //here first copied and incremented at same line
        }
        else{
            C[k] = B[j];
            k++;
            j++;
            //C[k++] = B[j++] same as incrementing later
            //here first copied and incremented at same line
        }
    }
    //for the remaining elements
    for( ; i<length1;i++){
        C[k] = A[i];
        k++;
        i++;
        //C[k++] = A[i++] same as incrementing later
        //here first copied and incremented at same line
    }
    //for the remaining elements
    for( ; j<length2;j++){
        C[k] = B[j];
        k++;
        j++;
        //C[k++] = B[i++] same as incrementing later
        //here first copied and incremented at same line
    }
    display(C,length3);
}



int main(){
    int A[] = {4,8,12,15,18};
    int B[] = {6,10,11,13,17,19};
    int length1 =  sizeof(A)/sizeof(A[0]);
    int length2 =  sizeof(B)/sizeof(B[0]);
    merging(A,B,length1,length2);
}