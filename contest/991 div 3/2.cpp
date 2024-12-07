#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n){
            cout<<"NO"<<endl;
        }
        else{
            ll evenSum = 0, evenCnt= 0, oddSum = 0, oddCnt=0;
            for(int i=0;i<n;i+=2){
                evenSum+=a[i];
                evenCnt++;
            }
            for(int i=1;i<n;i+=2){
                oddSum+=a[i];
                oddCnt++;
            }
            ll target = sum/n;
            if(evenSum/evenCnt==target && oddSum/oddCnt==target) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
        
    }
    
}