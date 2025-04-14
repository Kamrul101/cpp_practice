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
    int t;
    cin>>t;
    while(t--){
        string s, p;
        cin>>s>>p;
        vector<pair<char,int>> v1,v2;
        char temp = s[0];
        int cnt = 1;
        for(int i=1;i<s.size();i++){
            if(s[i] != temp) {
                v1.push_back({temp,cnt});
                temp = s[i];
                cnt = 1;
            } 
            else cnt++;
        }
        v1.push_back({temp,cnt});
        temp = p[0];
        cnt = 1;
        for(int i=1;i<p.size();i++){
            if(p[i] != temp) {
                v2.push_back({temp,cnt});
                temp = p[i];
                cnt = 1;
            }
            else cnt++;

        }
        v2.push_back({temp,cnt});
        
        bool ans = true;
        if(v1.size() != v2.size()) {
            cout<<"NO"<<endl;
            ans = false;
        }
        if(ans){
            for(int i=0;i<v1.size();i++) {
                int x = v1[i].second;
                int y = v2[i].second;
                if(v1[i].first != v2[i].first || y<x || y>2*x) {
                    cout<<"NO"<<endl;
                    ans = false;
                    break;
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
    }
}