#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =3e5+123;
// int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> v(m);
        vector<int> mp(k);
        for(int i=0;i<m;i++) cin>>v[i];
        for(int i=0;i<k;i++){
            cin>>mp[i];
        }
        if(k==n){
            for(int i=0;i<m;i++) cout<<'1';
            cout<<endl;
        }
        else if(k==n-1){
            int check=1;
            for(auto u: mp){
                if(u==check) check++;
                else break;
            }
            if(check>n) check=n;
            string s;
            for(auto u:v) {
                if(u==check) s+='1';
                else s+='0';
            }
            cout<<s<<endl;
        }
        else{
            for(int i=0;i<m;i++) cout<<'0';
            cout<<endl;
        }

        
    }
    
}