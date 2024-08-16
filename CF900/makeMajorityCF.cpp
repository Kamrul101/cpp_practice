#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
     int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0, len0=0, cnt0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
                if(cnt0){ 
                    len0++;
                }
                cnt0=0;
            }
            if(s[i]=='0') cnt0++;
        }
        if(cnt0) len0++;
        cout<<(cnt1>len0?"YES":"NO")<<endl;
     
    } 
}