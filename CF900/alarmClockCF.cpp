#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 1e7+123;


int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b) cout<<b<<endl;
        else if(c<=d) cout<<-1<<endl;
        else{
            ll time=0;
            time+=b;
            ll timeFall = 0,cnt=1;
            timeFall+=c-d;
            time+=timeFall;
            while(true){
            
                if(time>= a) break;
                time+=timeFall;
                cnt++;
            }
            // ll cnt = ceil((double(a-b)/(c-d)));
            cout<< b+cnt*c<<endl;
            
        }
    }
    
   
    
}