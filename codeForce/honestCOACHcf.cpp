#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"




int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            v.push_back(m);
        }
        sort(v.begin(),v.end());
        int mn=999999999;
        for(int i=1;i<n;i++){
            mn=min(mn, v[i]-v[i-1]);
        }
        cout<<mn<<endl;
    }
}
