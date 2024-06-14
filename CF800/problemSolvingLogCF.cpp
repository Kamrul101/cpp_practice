#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        map<char,int> mp;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(auto u:s){
            mp[u]++;
        }
        int cnt = 0;
        for(auto u: mp){
            if((u.first - 65+1)<=u.second){
                cnt++;
            }       
        }
        cout<<cnt<<endl;
    }
}