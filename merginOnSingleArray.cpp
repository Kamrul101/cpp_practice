#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5+123;
int a[]={0,1,4,6,8,11,2,3,9,10};
// int dp[mx]={0};
int merge(int l, int r, int mid){
    int p = l;
    int q = mid+1;
    int len = r-l+1;
    vector<int>v(len);
    int k = 0;
    for(int i=1;i<=r;i++){
        if(p>mid){
            v[k] = a[q];
            q++;
            k++;
        }
        else if(q>r){
            v[k] = a[p];
            p++;
            k++;
        }
        else if(a[p]<=a[q]){
            v[k] = a[p];
            k++;
            p++;
        }
        else{
            v[k] = a[q];
            k++;
            q++;
        }

    }
    k=0;
    for(int i=l;i<=r;i++){
        a[i]=v[k];
        k++;
    }
    
}

int main() {
    optimize();
    int l = 1;
    int r =9; 
    int mid  = 5;
    merge(l,r,mid);
    for(int i=1;i<=9;i++){
        cout<<a[i]<<" ";
    }
}
