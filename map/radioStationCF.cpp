#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    map<string,string>com;
    for(int i=0;i<n;i++){
        string s, ip;
        cin>>s>>ip;
        com[ip] = s;
    }
    for(int i=0;i<m;i++){
        string s, ip;
        cin>>s>>ip;
        ip.pop_back();
        cout<<s<<" "<<ip<<"; #"<<com[ip]<<endl;
    }
    
   

}