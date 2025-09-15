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
        string s;
        cin>>s;
        int cntD=0,cntK=0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++){
            if(s[i]=='D') cntD++;
            else cntK++;
            int g = __gcd(cntD,cntK);
            int x = cntD/g;
            int y = cntK/g;
            mp[{x,y}]++;
            cout<<mp[{x,y}]<<" ";
        }
        cout<<endl;
        
    }
    
}