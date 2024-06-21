#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#include<iostream>
int binarySearchUpperBound(int A[], int length, int key){
    int low= 0;
    int up= -1;
    
    int high = length - 1;
    while(low<=high){
        int mid = (low + high)/2;
        if(key<A[mid]){
            up = mid;
            high = mid -1;
        }
        
        else {
            low = mid +1;
        }

    }
    if(up==-1) up = length;
    return up;
}
 int main(){
    // optimize();
    int A[] ={2,4,6,10,10,10,15,24,29,31,42};
    int length = sizeof(A)/sizeof(A[0]);
    int k;
    cout<<"Enter value to find in array: "<<endl;
    cin>>k;
    int index = binarySearchUpperBound(A,length,k);
    cout<<"Upper Bound: "<<index<<endl;
 }