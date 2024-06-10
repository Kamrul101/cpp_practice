#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5+123;
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
        if(A[i]<=B[j]){
            C[k++] = A[i++];
            
            
        }
        else{
            C[k++] = B[j++];
            
            
        }
    }

    while(i<length1){
        C[k++] = A[i++];
        
        
    }

    while(j<length2){
        C[k++] = B[j++];
        
        
    }
    // double x;
    // if(length3%2){
    //    return C[length3/2];
        
    // }
    // else{
    //     return (C[length3/2 - 1]+ C[length3/2])/2.0; 
    // }
    display(C,length3);
    
}


int main() {
    optimize();
    int A[] = {};
    int B[] = {2,3};
    int length1 =  sizeof(A)/sizeof(A[0]);
    int length2 =  sizeof(B)/sizeof(B[0]);
    merging(A,B,length1,length2);
}
