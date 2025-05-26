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
        int n,k;
        cin>>n>>k;
        while(k--){
            string s;
            cin>>s;
            if(s=="->"){
                int x,y;
                cin>>x>>y;
                x--,y--;
                ll d = 0;
                for(int i=0;i<n;i++){
                    ll xi = x>>i&1;
                    ll yi = y>>i&1;
                    if(xi==0 && yi==0 ){
                        d^= 0LL <<(2*i);
                    }
                    if(xi==1 && yi==1 ){
                        d^= 1LL <<(2*i);
                    }
                    if(xi==1 && yi==0 ){
                        d^= 2LL <<(2*i);
                    }
                    if(xi==0 && yi==1 ){
                        d^= 3LL <<(2*i);
                    }
                }
                cout<<d+1<<endl;
            }
            else{
                ll d;
                cin>>d;
                d--;
                ll x = 0,y=0;
                for(int i=0;i<n;i++){
                    ll cur = 3LL<<(2*i);
                    ll digit = (d&cur)>>2*i;
                    if(digit==0){
                        x^=0<<i;
                        y^=0<<i;
                    }
                    if(digit==1){
                        x^=1<<i;
                        y^=1<<i;
                    }
                    if(digit==2){
                        x^=1<<i;
                        y^=0<<i;
                    }
                    if(digit==3){
                        x^=0<<i;
                        y^=1<<i;
                    }

                }
                cout<<x+1<<" "<<y+1<<endl;
            }
        }
        
    }
    
}