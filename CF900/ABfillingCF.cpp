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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r = n-1;
        while(s[l]!='A' && l<n) l++;
        while(s[r]!='B' && r>=0) r--;

        cout<<max(0,r-l)<<endl;

    }
}