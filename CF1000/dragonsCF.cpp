#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx = 2e5 + 123;


int main()
{
    optimize();
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>mp;
    while(n--){
        int x,y;
        cin>>x>>y;
        mp.push_back({x,y});
    }
    sort(mp.begin(),mp.end());
    bool ans = true;
    for(auto u:mp){
        if(s>u.first){
            s+=u.second;
        }
        else{
            ans = false;
            break;
        }
        
    }
    cout<<(ans?"YES":"NO")<<endl;
}