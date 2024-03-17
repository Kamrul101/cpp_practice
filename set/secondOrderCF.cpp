#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==1) cout<<"NO"<<endl;
    else{
        int count=1,p;
        for(auto u:s){
            if(count == 3) break;
            p = u;
            count++;
        }
        cout<<p<<endl;
    }
    
}