#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 1e5+123;
// int a[mx];
// int dp[mx]={0};


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,a="ABCDEFG";
        cin>>s;
        map<char,int>mp;
        mp['A'] = 0;
        mp['B'] = 0;
        mp['C'] = 0;
        mp['D'] = 0;
        mp['E'] = 0;
        mp['F'] = 0;
        mp['G'] = 0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            
        }
        int cnt=0;
        for(auto u:mp){
            if(u.second<m){
                cnt+=(m-u.second);
            }
            
        }
        cout<<cnt<<endl;
        

    }
    
    
}
