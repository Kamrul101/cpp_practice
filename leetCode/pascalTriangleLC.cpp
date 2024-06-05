#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};



vector<int> generatePascalRow(ll n){
    vector<int> row;

    ll res = 1;
    row.push_back(res);
    for(int i=1;i<n;i++){
        res = res*(n-i);
        res/=(i);
        row.push_back(res);
    }
    return row;
    
}
vector<vector<int>> pascalTriangle(ll n){
    vector<vector<int>> ans;

    for(int i=1;i<=n;i++){
        ans.push_back(generatePascalRow(i));
    }
    return ans;
    
    
}


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<int>> ans;
        ans = pascalTriangle(n);
        for(auto u:ans){
            for(auto p: u){
                cout<<p<<" ";
            }
            cout<<endl;
        }
        
    }
    
    
}
