#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x,a,b;
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    for(int i=b-1;i>=a;i--){
        v.erase(v.begin()+i-1);
    }
    cout<<v.size()<<endl;
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;

    
}