#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
// const int mx = 2e5+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        bool ans = true;
        int m1, m2;
        m1 = n*(a-b);
        m2= n*(a+b); 
        if(c+d <m1 || c-d>m2) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    
    
}