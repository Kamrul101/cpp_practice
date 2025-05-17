#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(!mp[a[i]]){
                ans++;
                int x = ((1<<31)-1)^a[i];
                mp[x]++;
            }
            else mp[a[i]]--;
        }
        cout<<ans<<endl;
    }
    
}