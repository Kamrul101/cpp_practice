#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =20;
int a[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    int cntMask = 1<<n;
    for(int i=0;i<n;i++) cin>>a[i];
    bool check = false;
    for(int mask = 0;mask<cntMask;mask++){
        int sum = 0;
        for(int i=0;i<n;i++){
            if((mask & (1<<i))!=0) sum-=a[i];
            else sum+=a[i];
        }
        if(sum%360==0){
            cout<<"YES"<<endl;
            check = true;
            break;
        }
    }
    if(!check) cout<<"NO"<<endl;
    
}