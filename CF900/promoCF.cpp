#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];
ll preSum[mx]={0};


int main() {
    optimize();
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        preSum[i] = preSum[i-1]+v[i-1];
    }
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<preSum[n-x+y]-preSum[n-x]<<endl;
    }
}
