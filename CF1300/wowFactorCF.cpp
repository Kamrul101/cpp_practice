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

        string s;
        cin>>s;
        int n=s.size();
        map<char,ll>mp={{'v',0},{'o',0}};
        ll ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='o') {
                mp[s[i]]+=mp['v'];
            }
            else if(i>0 && s[i-1]=='v'){
                mp[s[i-1]]++;
                ans+=mp['o'];
            }
        }
        cout<<ans<<endl;

    
}