#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 2e5 + 123;

string s,t;
int n,m;
int a[mx];
int removed[mx];
bool check(int val){
    mem(removed,0);
    for(int i=1;i<=val;i++) removed[a[i]-1]=1;
    for(int i=0,j=0;i<n;i++){
        if(removed[i]) continue;
        if(s[i]==t[j]){
            j++;
            if(j==m) return true;
        }

    }
    return false;
}

int main()
{
    optimize();
    cin>>s>>t;
    n = s.size();
    m = t.size();
    for(int i=1;i<=n;i++) cin>>a[i];
    int l=0,h=n;
    int ans=0;
    while(l<=h){
        int mid = (l+h)/2;
        if(check(mid)){
            ans = mid;
            l = mid+1;
        }
        else h = mid -1;
    }
    cout<<ans<<endl;
}