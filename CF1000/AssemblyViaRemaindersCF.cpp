#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1000;
int a[mx];
int preSum[mx]={0};
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        a[0]=0;
        for(int i=1;i<n;i++) cin>>a[i];
        vector<int> v;
        v.push_back(1000);
        
        for(int i=1;i<n;i++)preSum[i] = preSum[i-1] + a[i];
        
        for(int i=1;i<n;i++){
            v.push_back(preSum[i]+1000);
        }
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
        
    }
    
}