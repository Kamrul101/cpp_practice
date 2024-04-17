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
        int a,b,c;
        cin>>a>>b>>c;
        if((a+c)%(2*b)==0) cout<<"YES"<<endl;
        else if((2*b-c)>0 &&((2*b - c)%a)==0) cout<<"YES"<<endl;
        else if((2*b-a>0)&& (2*b-a)%c==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
