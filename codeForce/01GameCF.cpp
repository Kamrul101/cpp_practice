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
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(auto u: s){
           if(u=='1') c1++;
           else c2++;
        }
        int m = min(c1,c2);
        if(m%2!=0) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
}
