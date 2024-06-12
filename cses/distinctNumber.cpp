#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
int a[mx];

void merging(int A[] ,int l, int mid, int h)
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
void RecMergeSort(int A[], int l, int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        RecMergeSort(A,l,mid);
        RecMergeSort(A,mid+1,h);
        merging(A,l,mid,h);
    }
}
int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    RecMergeSort(a,0,n-1);
    int ans=1;
    for(int i=0;i<n-1;i++) {
        if(a[i]!=a[i+1]) ans++;
    }
    cout<<ans<<endl;

}
