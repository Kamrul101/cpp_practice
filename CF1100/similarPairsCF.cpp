#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =100;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntE = 0, cnt0=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2) cnt0++;
            else cntE++;
        }
        if(cnt0%2 != cntE%2) cout<<"NO"<<endl;
        else{
            if(cntE%2==0) cout<<"YES"<<endl;
            else{
                bool ans = true;
                for(int i=0;i<n;i++){
                    for(int j = i+1;j<n;j++){
                        if((a[i]%2!=a[j]%2) && abs(a[i]-a[j])==1){
                            cout<<"YES"<<endl;
                            ans = false;
                            break;
                        }
                    }
                    if(!ans) break;
                }
                if(ans) cout<<"NO"<<endl;
            }
        } 
    }
    
}