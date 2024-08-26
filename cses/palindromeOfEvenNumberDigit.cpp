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
    int lim = 1e6;
    vector<pair<int,string>> v;
    string s,t;
    int cnt=0;
    for(int i=1;i<=lim;i++){
        s+=to_string(i);
        if(s.size()%2==0){
            t=s;
            reverse(t.begin(),t.end());
            if(s==t) {
                cnt++;
                v.push_back({cnt,s});
            }
            t.clear();
        }
        s.clear();
    } 
    for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
    }
}