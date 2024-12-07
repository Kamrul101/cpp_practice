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
        ll sum = 0, two=0, three=0;
        for(auto u:s){
            sum+=u -'0';
            if(u=='2') two++;
            if(u=='3') three++;
        }
        if(sum%9LL==0) cout<<"YES"<<endl;
        else{
            bool ans = false;
            for(ll i=0;i<=min(100LL,two);i++){
                for(ll j=0;j<=min(100LL,three);j++){
                    if((sum+(2*i)+(6*j))%9==0){
                        ans = true;
                        break;
                    }
                }
                if(ans) break;
            }
            cout<<(ans?"YES":"NO")<<endl;
        }

        
    }
    
}