#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n ,m;
        cin>>n>>m;
        if(n==m) cout<<"YES"<<endl;
        else if(n>m){
            if((n-m)%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;

    }
}
