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
       int n,a,b;
       cin>>n>>a>>b;
       string s;
       cin>>s;
       int x = 0,y=0;
       bool ans = false;
       
        for(int i=0;i<100;i++){
            for(int i=0;i<n;i++){
                if(x==a && y==b) {
                cout<<"YES"<<endl;
                ans = true;
                break;
            }
            if(s[i]=='N'){
                y+=1;
            }
            else if(s[i]=='E'){
                x+=1;
            }
            else if(s[i]=='S'){
                y-=1;
            }
            else if(s[i]=='W'){
                x-=1;
            }
            }
            if(ans) break;
            }
            if(!ans) cout<<"NO"<<endl;
    }
    
}