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
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    int ans=0;
    for(int i=0;i<n;i++){
        bool cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        int x,y;
        x = v[i].first;
        y=v[i].second;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[j].first>x && v[j].second==y) cnt1=1;
            else if(v[j].first<x && v[j].second==y) cnt2=1;
            else if(v[j].first==x && v[j].second<y) cnt3=1;
            else if(v[j].first==x && v[j].second>y) cnt4=1;
            
        }
        if(cnt1 && cnt2 && cnt3 && cnt4) ans++;
    }
    cout<<ans<<endl;
    
    
}