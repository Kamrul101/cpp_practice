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
        vector<int> odd, even;
        int mx = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x&1) odd.push_back(x);
            else even.push_back(x);
            mx = max(mx,x);
        }
        if(odd.empty() || even.empty()){
            cout<<mx<<endl;
            continue;
        }
        sort(odd.begin(),odd.end());
        ll sum = 0;
        for(auto u:even) sum+=u;
        for(int i=0;i<odd.size()-1;i++) sum+=(odd[i]-1);
        sum+=odd.back();
        cout<<sum<<endl;
        
    }
    
}