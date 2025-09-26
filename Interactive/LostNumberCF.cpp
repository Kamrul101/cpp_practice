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

int query(int i,int j){
    cout<<"? "<<i+1<<" "<<j+1<<endl;
    int val;
    cin>>val;
    return val;
}

int common(pair<int,int>a, pair<int,int>b){
    if(a.first==b.first || a.first==b.second) return a.first;
    return a.second;
}

int other(pair<int,int>p, int a){
    if(p.first==a) return p.second;
    return p.first;
}

int main() {
    // optimize();
    
    vector<int> v={4,8,15,16,23,42};
    map<int,pair<int,int>>mp;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            int x = v[i];
            int y = v[j];
            mp[x*y] = {x,y};
        }
    }

    vector<int> ans(6);

    auto p1 = mp[query(0,1)];
    auto p2 = mp[query(1,2)];

    ans[1] = common(p1,p2);
    ans[0] = other(p1,ans[1]);
    ans[2] = other(p2,ans[1]);

    p1 = mp[query(3,4)];
    p2 = mp[query(4,5)];

    ans[4] = common(p1,p2);
    ans[3] = other(p1,ans[4]);
    ans[5] = other(p2,ans[4]);

    cout<<"! ";
    for(auto u:ans) cout<<u<<" ";
    cout<<endl;

}