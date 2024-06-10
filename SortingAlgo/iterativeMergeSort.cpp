#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;

int merging(int A[] ,int l, int mid, int h)
{
    int i = l, j = mid+1, k = l;
    int len = h+1;
    int B[len];

    while (i <= mid && j <= h)
    {
        if (A[i] <= A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    while (i <=mid)
    {
        B[k++] = A[i++];
    }
    while (j <= h)
    {
        B[k++] = A[j++];
    }
    for(int i=l;i<=h;i++){
        A[i] = B[i];
    }
}
void itMergeSort(int A[], int n){
    int p,i,l,mid,h;
    for(p=2;p<=n;p*=2){
        for(i=0;i+p-1<n;i+=p){
            l = i;
            h = i+p-1;
            mid = (l+h)/2;
            merging(A,l,mid,h);
        }
    }
    if(p/2<n) {
        merging(A, 0, p/2-1, n);
    }
}
int main()
{
    optimize();
    int a[] = {8,3,7,4,9,2,6,5,12};
    itMergeSort(a,9);
    for(int i=0;i<9;i++) cout<<a[i]<<" ";

}
