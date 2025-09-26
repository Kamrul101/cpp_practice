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
        int n,k;
        cin>>n>>k;
        int cntK=0, mex=-1;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k) cntK++;
            s.insert(a[i]);
        }
        int cnt = 0;
        for(int i=0;i<k;i++){
            if(s.count(i)) continue;
            cnt++;

        }
        cout<<max(cnt,cntK)<<endl;
         
    }
    
}