#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
int a[21];
int n;

int solve(int idx,int left,int right){
    if(idx==n) return abs(left-right);
    int l = solve(idx+1, left+a[idx],right);
    int r = solve(idx+1,left,right+a[idx]);
    return min(l,r);
}

int main() {
    optimize();
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<solve(0,0,0)<<endl;

    
}