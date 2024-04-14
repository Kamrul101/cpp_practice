#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int m[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     pair<int,int> v[n];

     for(int i=0;i<n;i++){
        
        cin>>v[i].first;
        
     }
     for(int i=0;i<n;i++){
        
        cin>>v[i].second;
     }
     sort(v,v+n);
     for(auto u:v){
        cout<<u.first<<" ";
     }
     cout<<endl;
     for(auto u:v){
        cout<<u.second<<" ";
     }
     cout<<endl;

    }

}
