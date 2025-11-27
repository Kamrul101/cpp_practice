#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];

void recurPermute(int idx, string &s, vector<string> &ans) {
    if(idx == s.size()){
        ans.push_back(s);
        return;
    }
    for(int i=idx;i<s.size();i++) {
        swap(s[idx], s[i]);
        recurPermute(idx + 1, s, ans);
        swap(s[idx], s[i]);
    }
}

int main() {
    optimize();
    int t;
    cin>>t;
    vector<string> vs = {"12","123","1234"};
    map<int,vector<string>> mp;
    for(int i=0;i<=2;i++){
        vector<string> c;
        recurPermute(0,vs[i],c);
        sort(c.begin(),c.end());
        mp[i+2]=c;
    }
    // for(auto u:mp){
    //     for(auto x:u.second) cout<<x<<" ";
    //     cout<<endl;
    // }
    while(t--){
        string s;
        int n,m;
        cin>>s>>n>>m;

        int cntA=0,cntB=0;
        int x = s.size();

        string s1 = mp[x][n-1];
        string s2 = mp[x][m-1];
        for(int i=0;i<x;i++){
            if(s1[i]==s2[i]) cntA++;
        }
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(i!=j && s1[i]==s2[j]) cntB++;
            }
        }
        cout<<cntA<<'A'<<cntB<<'B'<<endl;

        
    }
    
}