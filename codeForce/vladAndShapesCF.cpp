#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        for(int i=0;i<3;i++){
            int a;
            cin>>a;
        v.push_back(a);
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
           
    }
    
}
