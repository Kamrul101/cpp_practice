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
        bool ans = false;
        for(int i=1;i<n-1;i++){
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
                ans = true;
                break;
            }
        }
        if(ans) cout<<2<<endl;
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='.') cnt++;
            }
            cout<<cnt<<endl;
        }
        
    }
    
}