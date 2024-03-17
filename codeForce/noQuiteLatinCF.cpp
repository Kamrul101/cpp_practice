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
    while(t--){
        map<char,int> m;
        for(int i=0;i<9;i++){
            char a;
            cin>>a;
            if(a=='?')continue;
            m[a]++;
        }
        for(auto u:m){
            if(u.second == 2) cout<<u.first<<endl;
        }
    }
    
    
}