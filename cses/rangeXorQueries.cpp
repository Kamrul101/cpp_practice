#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];
ll preSum[mx];


int main() {
    optimize();
    int n,t;
    cin>>n>>t;
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        preSum[i] = preSum[i-1]^a[i];
    }
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<(preSum[r]^preSum[l-1])<<endl;
    }
}
