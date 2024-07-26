#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

// const int mx = 1e5+123;

int main() {
    optimize();
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>v;

        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }

        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<v[i][j];
            }
            cout<<endl;
        }


        
    }
    
   
    
}