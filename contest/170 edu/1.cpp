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
        string s,t;
        cin>>s>>t;
        int cnt = 0;
        int mn = min(s.size(),t.size());
        for(int i=0;i<mn;i++){
            if(s[i]!=t[i]){
                break;
            }
            else{
                cnt++;
            } 
        }
        
        int x = cnt + (s.size()-cnt) + (t.size() - cnt);
        if(cnt>0) x++; 
        cout<<x<<endl;
    }
    
}