#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int m[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
     int n,m,k;
     cin>>n>>m>>k;
     if(n-(n/m+(n%m!=0))<=k) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;

    }

}
