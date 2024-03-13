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
    map<string,int> m;
    while(n--){
        string s;
        cin>>s;
        if(m[s]>0) cout<<s<<m[s]<<endl;
        else cout<<"OK"<<endl;
        m[s]++;
    }

}