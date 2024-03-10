#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        if(n == 1){
            cout<<0<<endl;
        }
        else if(n == 2){cout<<m<<endl;}
        else cout<<m+m<<endl;
    }
 
}