#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int a[mx];
// int dp[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        int minF = INT_MAX, maxF = -1,fav=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i==f-1) fav= a[i];
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<n;i++){
            if(a[i]==fav){ maxF = max(i,maxF);}
            if(a[i]==fav) {minF = min(i,minF);}
        }
        if(minF<=k-1 && maxF>k-1) cout<<"MAYBE"<<endl;
        else if(minF<=k-1 && maxF<=k-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}
