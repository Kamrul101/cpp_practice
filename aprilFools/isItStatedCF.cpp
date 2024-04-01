#include<bits/stdc++.h>
using namespace std;
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
        int t = s.find("it");
        // cout<<t<<endl;
        if(t<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
