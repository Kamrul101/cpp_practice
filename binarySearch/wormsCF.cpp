#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
int a[mx];


int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pair<int,int>> v;
    v.push_back({1,a[0]});
    for(int i=1;i<n;i++){
        v.push_back({v[i-1].second+1,v[i-1].second+a[i]});
    }
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int l=0,h=n-1;
        int ans = 0;
        while(l<=h){
            int mid = (l+h)/2;
            if(m>=v[mid].first && m<=v[mid].second){
                ans = mid;
                break;
            }
            if(v[mid].first>m) h = mid -1;
            else l = mid +1;
        }
        cout<<ans+1<<endl;
    }
}