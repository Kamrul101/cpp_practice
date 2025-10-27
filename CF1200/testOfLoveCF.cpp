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
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        s="L"+s+"L";
        int i=0,cntW = 0;
        while(i<=n){
            if(s[i]=='C') break;
            if(s[i]=='W'){
                i++;
                cntW++;
                continue;
            }
            bool check = false;

            for(int j=min(i+m,n+1);j>i;j--){
                if(s[j]=='L'){
                    i = j;
                    check = true;
                    break;
                }
            }
            if(check)continue;
            for(int j=min(i+m,n+1);j>i;j--){
                if(s[j]=='W'){
                    i=j;
                    check=true;
                    break;
                }
            }
            if(!check) break;

        }
        if(i>n && cntW<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }
    
}