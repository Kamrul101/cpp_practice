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
    set<int>s;
    while(t--){
        int q, a;
        cin>>q>>a;
        if(q==1){
            s.insert(a);
        }
        else if(q==2){
            s.erase(a);
        }
        else{
            if(s.count(a)==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    
}