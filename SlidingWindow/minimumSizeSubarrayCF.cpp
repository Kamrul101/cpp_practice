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
        string s;
        cin>>s;
        queue<char> q;
        for(auto u:s) q.push(u);
        deque<char> dq;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            dq.push_back(q.front());
            mp[q.front()]++;
            q.pop();
            if(mp.size()==3) break;
        }
        if(mp.size()<3) {
            cout<<0<<endl;
            continue;
        }
        int mn=s.size();
        while(1){
            char x = dq.front();
            mn = min(mn,(int)dq.size());
            if(mp[x]==1){
                while(!q.empty()){
                    dq.push_back(q.front());
                    mp[q.front()]++;
                    q.pop();
                    if(mp[x]>1) break;
                }
            }
            dq.pop_front();
            mp[x]--;
            if(mp[x]==0) break;
        }
        cout<<mn<<endl;
        
    }
    
}