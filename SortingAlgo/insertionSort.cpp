#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5 + 123;
// int a[mx];
// ll preSum[mx] = {0};


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
void insertionSort(int A[], int l ){
    for(int i=1;i<l;i++){
        int j = i-1;
        int x = A[i];
        while(j>=0 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main()
{
    optimize();
    
    int A[] = {11,2,6,8,-3,0,9};
    
    int length = sizeof(A)/sizeof(A[0]);
    insertionSort(A,length);
    for(int i=0;i<length;i++) cout<<A[i]<<" ";
    
}
