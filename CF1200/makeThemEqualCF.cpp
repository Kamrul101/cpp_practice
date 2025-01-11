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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        bool check = true;
        for(auto u:s){
            if(u!=c){
                check = false;
                break; 
            } 
                
        }        
        if(check) cout<<0<<endl;
        else{
            bool ans = false;
            for(int i=1;i<=n;i++){
                check = true;
                for(int j = i;j<=n;j+=i){
                    if(s[j-1]!=c){
                        check = false;
                    }
                }
                if(check){
                    cout<<1<<endl;
                    cout<<i<<endl;
                    ans = true;
                    break;
                }
            }
            if(!ans) {
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
        
    }
    
}