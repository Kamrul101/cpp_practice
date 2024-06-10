#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntU=0;
        char a;
        for(int i=0;i<n;i++){ 
            cin>>a;
            if(a=='U') cntU++;
            }
        if(cntU%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
