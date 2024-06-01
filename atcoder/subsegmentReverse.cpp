#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
        v[i] = i+1;
    }
    reverse(v.begin()+l-1,v.begin()+r);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
