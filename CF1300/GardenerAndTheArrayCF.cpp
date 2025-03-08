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
        vector<int> a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a[i].resize(k);
            for(int j=0;j<k;j++) {
                cin>>a[i][j];
                mp[a[i][j]]++;
            }

        }
        bool ans = false;
        for(int i=0;i<n;i++){
            bool check = true;
            for(int j=0;j<a[i].size();j++){
                if(mp[a[i][j]]>1) continue;
                check = false;
                break;
            }
            if(check){
                ans = true;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
        
    }
    
}