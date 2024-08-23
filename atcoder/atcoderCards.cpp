#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx];
int main()
{
    string s,t, k="atcoder";
    cin>>s>>t;
    map<char,int> m1;
    map<char,int> m2;
    for(int i=0;i<s.size();i++){
        m1[s[i]]++;
        
    }
    for(int i=0;i<t.size();i++){
        m2[t[i]]++;
    }
    for(int i=0;i<7;i++){
        int mx = max(m1[k[i]],m2[k[i]]);
        m1['@'] -= mx - m1[k[i]];
        m2['@'] -= mx - m2[k[i]];
        m1[k[i]]=m2[k[i]]=mx;
    }
    bool ans;
    if(m1['@']>=0 && m2['@']>=0) ans = true;
    else ans =false;
    for(auto u:m1){
        if(m2[u.first]!=u.second){
            ans =false;
            break;
        }
    }
    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}