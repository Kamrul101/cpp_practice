#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int dp[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mx=1;
            int cnt = 1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                cnt++;
                mx = max(mx,cnt);
            }
            else{ 
                cnt=1;
                }
            
        }
        cout<<mx+1<<endl;
    }
    
    
}
