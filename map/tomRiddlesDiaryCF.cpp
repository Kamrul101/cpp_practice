#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    map<string,bool> m;
    while(n--){
        string s;
        cin>>s;
        if(m[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        m[s] = 1;
    }

}