#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int m;
     cin>>m;
     while(m--){
        string s;
        cin>>s;
        map<int,char> m1;
        map<char,int> m2;
        bool ans = true;
        for(int i=0;i<n;i++){
            if(m1.count(v[i]) && m1[v[i]]!= s[i]){
                ans = false;
                break;
            }
            if(m2.count(s[i]) && m2[s[i]]!= v[i]){
                ans = false;
                break;
            }
            m1[v[i]] = s[i];
            m2[s[i]] = v[i];
        }
        if(s.size()==n && ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     
    } 
}