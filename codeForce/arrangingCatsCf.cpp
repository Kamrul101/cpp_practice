#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int m[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int> v;
        int a,x,l=1,r=INT_MAX;
     for(int i=0;i<n;i++){
        cin>>a>>x;
        if(a==1) l= max(l,x);
        if(a==2) r=min(r,x);
        if(a==3) v.push_back(x);
     }
     int c=0;
     for(auto u:v){
        if(u>=l && u<=r ) c++;
     }
     cout<<max(r-l-c+1,0)<<endl;
    }

}
