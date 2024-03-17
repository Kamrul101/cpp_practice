#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    string s,temp;
    cin>>s;
    
    for(auto u: s){
        if(u==','){
            cout<<temp<<endl;
            temp.clear();
            continue;
        }
        temp+=u;
    }
    cout<<temp<<endl;
    
}