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
        int n, r, b;
        cin>>n>>r>>b;
        
        string s;
        int x = r/(b+1);
        int rem = r%(b+1);
        for(int i=1;i<=b+1;i++){
            for(int j=1;j<=x;j++){
                s+='R';
            }
            if(rem){
                s+='R';
                rem--;
            }
            if(i!=b+1) s+='B';
        }
        cout<<s<<endl;
        
    }
    
}