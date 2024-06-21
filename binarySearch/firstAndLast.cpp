#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
int lowerBound(int A[], int length, int key){
    int low= 0;
    int lo = -1;
    int high = length - 1;
    while(low<=high){
        int mid = (low + high)/2;
        if(key==A[mid]){
            lo = mid;
        }
        if(key<=A[mid]){
            high = mid -1;
        }
        else {
            low = mid +1;
        }

    }
    return lo;
}
int upperBound(int A[], int length, int key){
    int low= 0;
    int up = -1;
    int high = length - 1;
    while(low<=high){
        int mid = (low + high)/2;
        if(key==A[mid]){
            up = mid;
        }
        if(key>=A[mid]){
            low = mid +1;
        }
        else {
            high = mid -1;
        }

    }
    return up;
}
 int main(){
    int A[] ={5,7,7,8,8,10,11,12,12};
    int length = sizeof(A)/sizeof(A[0]);
    int k;
    cout<<"Enter value to find in array: "<<endl;
    cin>>k;
    int index = lowerBound(A,length,k);
    int index2 = upperBound(A,length,k);
    cout<<"Lower Bound: "<<index<<" "<<"Upper bound: "<<index2<<endl;
 }