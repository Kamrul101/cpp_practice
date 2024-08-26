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
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        string temp;
        int i=0;
        while(1){
            bool ans = true;
            for(auto &u:mp){
                if(u.second>0){
                    temp+=u.first;
                    u.second--;
                    if(u.second>0) ans=false;
                }
                
            }
            if(ans) break;
        }
        cout<<temp<<endl;
    }
}