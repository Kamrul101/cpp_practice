#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
typedef long long ll ;
// const int mx = 2e5+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v;
        int cnt = 1;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                
                cnt++;
               continue;
            }
            else{
               v.push_back(cnt);
                cnt=1;
            } 
        }
        int ans = 0;
        for(auto u:v){
            if(u%2){
                ans+=u/2+1;
            }
            
            else ans+=u/2;
            
        }
        cout<<ans<<endl;
    }
    
    
}