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
        int ans = 10;
        for(int mask =0; mask<(1<<10);mask++){
            bool ok = true;
            for(int i=0;i<10;i++){
                if(s[i]!='?' && (s[i]-'0')!=(mask>>i&1)){
                    ok=false;
                }
            }
            if(!ok) continue;
            int diff=0;
            for(int i=0;i<10;i++){
                if(mask>>i&1){
                    if(i%2==0){
                        diff++;
                    }
                    else diff--;
                }
                if((diff>(10-i)/2) ||( -diff>(9-i)/2)){
                    ans = min(ans,i+1);
                    break;
                }
            }
        }
        cout<<ans<<endl;
        
    }
    
}