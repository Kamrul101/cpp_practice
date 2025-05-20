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
    int n,k;
    cin>>n>>k;
    int x = __builtin_popcount(n);
    if(k<x || n<k) cout<<"NO"<<endl;
    else {
        priority_queue<int>pq;
        for(int i=0;i<31;i++){
            if(n&(1<<i)){
                pq.push(1<<i);
            }
        }
        bool check = true;
        while(pq.size()<k){
            int x = pq.top();
            pq.pop();
            if(x==1){
                cout<<"NO"<<endl;
                check=false;
                break;
            }
            pq.push(x/2);
            pq.push(x/2);
        }
        if(check){
            cout<<"YES"<<endl;
            while(!pq.empty()){
                cout<<pq.top()<<" ";
                pq.pop();
            }
        }
    }
    
}