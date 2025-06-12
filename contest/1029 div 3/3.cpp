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
        vector<int> v1(n+2),v2(n+2);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int> cur,pre;
        int cnt = 0;
        for(int i=0;i<n;i++){
            cur.insert(a[i]);
            if(pre.count(a[i])){
                pre.erase(a[i]);
            }
            if(pre.size()==0){
                cnt++;
                pre = cur;
            }
        }
        cout<<cnt<<endl;
        
    }
    
}