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
vector<int> b(32);
void decimalToBinary(ll n){
    int i = 0;
    while (n > 0 && i < 32) {
        b[i++] = n & 1;
        n >>= 1;
    }
}
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        fill(b.begin(),b.end(),0);
        decimalToBinary(x);

        bool check = false;
        int j;
        for(int i=32;i>=0;i--){
            if(b[i]==1) {
                check = true;
                j=i;
                break;
            }
        }
        ll y = 1,res=1;
        for(int i=1;i<j;i++){
            res*=2;
            y+=res;
        }
        ll z = x^y;
        // cout<<z<<endl;
        if(x+y>z && y+z>x && z+x>y) cout<<y<<endl;
        else cout<<-1<<endl;
        
    }
    
}