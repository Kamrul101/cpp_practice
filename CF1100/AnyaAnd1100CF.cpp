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
        string s;
        cin>>s;
        int q;
        cin>>q;
        int cnt =0;
        int n = s.size();
        for(int i=0;i<s.size()-3;i++){
            cnt +=s.substr(i,4)=="1100";
        }
        while(q--){
            int x;
            char v;
            cin>>x>>v;
            x--;
            for(int i= max(0,x-3);i<=min(x,n-4);i++){
                cnt -=s.substr(i,4)=="1100";
            }
            s[x] = v;
            for(int i= max(0,x-3);i<=min(x,n-4);i++){
                cnt +=s.substr(i,4)=="1100";
            }
            cout<<(cnt?"YES":"NO")<<endl;
        }
        
    }
    
}