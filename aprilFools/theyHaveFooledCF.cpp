#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    vector<pair<int,int>>v;
    v.push_back({0,10});
    v.push_back({1,10});
    v.push_back({2,8});
    v.push_back({3,9});
    v.push_back({4,8});
    v.push_back({5,7});
    v.push_back({6,7});
    v.push_back({7,7});
    v.push_back({8,7});
    v.push_back({9,0});
    v.push_back({10,9});
    v.push_back({11,6});
    v.push_back({12,8});

    int a;
    cin>>a;
    for(auto u:v){
        if(u.first==a) cout<<u.second<<endl;
    }

}
