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

ll cost(vector<int> &v,string s, char c){
    if(v.size()==0) return 0;
    ll ans = 0, cnt=0;
    int m = v.size();
    for(int i=v[0];i<=v[m/2];i++){
        if(s[i]==c) cnt++;
        else ans+=cnt;
    }
    cnt=0;
    for(int i=v[m-1];i>=v[m/2];i--){
        if(s[i]==c) cnt++;
        else ans+=cnt;
    }
    return ans;
}
/*
ll cost(vector<int> &v){
    if(v.size()==0) return 0;
    int m = v.size();
    ll cnt = 0;
    for(int i=0;i<m;i++){
        v[i]-=i;
    }
    for(int i=0;i<m;i++){
        ll x = abs(v[m/2]-v[i]);
        cnt+=x;
    }
    return cnt;
}
*/

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> v1,v2;

        for(int i=0;i<n;i++){
            if(s[i]=='a') v1.push_back(i);
            else v2.push_back(i);
        }

        // cout<<min(cost(v1),cost(v2))<<endl;
        // cout<<cost(v1)<<endl;
        // cout<<cost(v2)<<endl;
        cout<<min(cost(v1,s,'a'),cost(v2,s,'b'))<<endl;

        
    }
    
}