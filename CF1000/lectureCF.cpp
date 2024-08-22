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
int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    while(m--){
        string s1,s2;
        cin>>s1>>s2;
        mp[s1] = s2;
    }
    cin.ignore();
    string s3;
    getline(cin,s3);
    vector<string>v;
    string t;
    for(auto u:s3){
        if(u==' '){
            v.push_back(t);
            t.clear();
        }
        else t+=u;
    }
    v.push_back(t);
    for(int i=0;i<v.size();i++) {
        for(auto x:mp){
            if(v[i]==x.first || v[i]==x.second){
                if(x.first.size()<=x.second.size()){
                    v[i]=x.first;
                }
                else{
                    v[i]=x.second;
                    
                }
            }
            
        }
    }
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}