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
        int n;
        cin>>n;
        vector<ll>even,odd;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0) even.push_back(x);
            else odd.push_back(x);
        }
        ll sum = 0;
        int ans = 0;
        for(int i=0;i<even.size();i++){
            sum+=even[i];
            if(sum%2==0){
                ans++;
                while(sum%2==0){
                    sum/=2;
                }
            }
        }
        for(int i=0;i<odd.size();i++){
            sum+=odd[i];
            if(sum%2==0){
                ans++;
                while(sum%2==0){
                    sum/=2;
                }
            }
        }
        
        cout<<ans<<endl;
    }
    
}