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
        int n,m;
        cin>>n;
        string s,c1,c2,t;
        cin>>s;
        cin>>m;
        cin>>c1>>c2;
        for(int i=0;i<m;i++){
            if(c2[i]=='V') t+=c1[i];
        }
        reverse(t.begin(),t.end());
        t+=s;
        for(int i=0;i<m;i++){
            if(c2[i]=='D') t+=c1[i];
        }
        cout<<t<<endl;
    }
    
}