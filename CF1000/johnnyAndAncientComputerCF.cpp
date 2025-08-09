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
        ll a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<endl;
            continue;
        }

        if(a<b) swap(a,b);

        if(a%b!=0){
            cout<<-1<<endl;
            continue;
        }

        int cnt= 0;
        int x = __builtin_popcountll(a);
        bool c = true;

        while(a!=b){
            if(x>__builtin_popcountll(a>>1)) {
                c=false;
                break;
            }
            else a=a>>1;
            cnt++;
        }

        int ans = 0;
        ans+=cnt/3;
        cnt%=3;
        ans+=cnt/2;
        cnt%=2;
        ans+=cnt;

        if(a==b && c){
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;

        /*
            if(a==b){
                cout<<0<<endl;
                continue;
            }

            if(a<b) swap(a,b);

            int cnt= 0;
            while(a%8==0){
                if(a/8>=b) a/=8,cnt++;
                else break;
            }
            while(a%4==0){
                if(a/4>=b) a/=4,cnt++;
                else break;
            }
            while(a%2==0){
                if(a/2>=b) a/=2,cnt++;
                else break;
            }
            if(a!=b) cout<<-1<<endl;
            else cout<<cnt<<endl;

        */
        
    }
    
}