#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        while(x>0 && n && x/2+10<x){
            n--;
            x=x/2+10;
        }
        
        if(x<=m*10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
