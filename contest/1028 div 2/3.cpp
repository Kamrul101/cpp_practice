#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =5005;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(5001,INT_MAX);
        queue<int> q;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v[a[i]] = 0;
            q.push(a[i]);
        }
        int g = 0;
        for(int i=0;i<n;i++){
            g = __gcd(g,a[i]);
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(a[i]==g) cnt++;
        }
        if(cnt) {
            cout<<n-cnt<<endl;
            continue;
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(int i=0;i<n;i++){
                int gc = __gcd(a[i],x);
                if(v[gc]==INT_MAX){
                    v[gc] = 1 + v[x];
                    q.push(gc);
                }
            }
        }
        cout<<n+v[g]-1<<endl;
        
    }
    
}