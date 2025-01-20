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
        int n;
        cin>>n;
        vector<ll> v(n),a;
        map<ll,ll> mp;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            s.insert(v[i]);
        }
        if(s.size()==n){
            cout<<-1<<endl;
        }
        else{
            sort(v.begin(),v.end());
            int d1,d2;
            ll c;
            for(int i=0;i<n-1;i++){
                if(v[i]==v[i+1]){
                    d1=i;
                    d2=i+1;
                    c = v[i];
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(i!=d1 && i!=d2){
                    a.push_back(v[i]);
                }
            }
            ll mn = INT_MAX;
            int ans1=-1,ans2=-1;
            for(int i=0;i<a.size()-1;i++){
                ll x = a[i+1] - a[i];
                if(x<mn){
                    mn = x;
                    ans1=i;
                    ans2=i+1;
                }
            }
           
                ll x = a[ans2] - a[ans1];
                if(2*c>x){
                    cout<<c<<" "<<c<<" "<<a[ans1]<<" "<<a[ans2]<<endl;
                }
                else cout<<-1<<endl;
            

        }
    }
    
}