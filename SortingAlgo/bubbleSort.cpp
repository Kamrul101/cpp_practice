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
void bubbleSort(int A[], int l ){
    int flag;
    int i,j;
    for( i=0;i<l-1;i++){
        flag=0;
        for( j=0;j<l-1-i;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
}

int main()
{
    optimize();
    
    int A[] = {11,2,6,8,-3,0,9};
    
    int length = sizeof(A)/sizeof(A[0]);
    bubbleSort(A,length);
    for(int i=0;i<length;i++) cout<<A[i]<<" ";
    
}
