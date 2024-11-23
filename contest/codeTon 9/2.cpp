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
        int n = s.size();
        bool ans = false;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                cout<<s[i]<<s[i+1]<<endl;
                ans = true;
                break;
            }
        }
        if(!ans){
            for(int i=0;i<n-2;i++){
                 if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
                    cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                    ans = true;
                    break;
                }
            }

        }
        if(!ans) cout<<-1<<endl;

    }
    
}