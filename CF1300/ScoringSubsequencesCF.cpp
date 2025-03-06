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
        for(int i=0;i<n;i++) cin>>a[i];
        int cnt=1;
        cout<<cnt<<" ";
        for(int i=1;i<n;i++){
            if(a[i-cnt]>=(cnt+1)){
                cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
        // priority_queue<int,vector<int>,greater<int>>pq;
        // for(int i=0;i<n;i++){
        //     int x;
        //     cin>>x;
        //     pq.push(x);
        //     int y = pq.top();
        //     if(pq.size() > y) pq.pop();
        //     cout<<pq.size()<<" ";
        // }
        // cout<<endl;
    }
    
}