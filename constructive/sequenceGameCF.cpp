#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            
            if(i && v.back()>x){
                v.push_back(1);
            }
            v.push_back(x);
        }
       
        
       
        cout<<v.size()<<endl;
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
    }    
    
}
