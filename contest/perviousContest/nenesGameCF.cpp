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
     int k,q;
     cin>>k>>q;
     vector<int>v1,v2;
     int mn=INT_MAX;
     for(int i=0;i<k;i++){
        int a;
        cin>>a;
        v1.push_back(a);
        if(a<mn) mn=a;
     }
     for(int i=0;i<q;i++){
        int a;
        cin>>a;
        v2.push_back(a);
        
     }
     for(int i=0;i<q;i++){
        if(v2[i]<mn) cout<<v2[i]<<" ";
        else cout<<mn-1<<" ";
     }
     cout<<endl;
    }

}
