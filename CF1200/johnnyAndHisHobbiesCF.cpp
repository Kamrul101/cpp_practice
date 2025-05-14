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
        vector<int> v(n);
        int mx = -1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool ans = false;
        for(int i=1;i<=1024;i++){
            vector<int> v2;
            for(int j=0;j<n;j++){
                v2.push_back(v[j]^i);
            }
            sort(v2.begin(),v2.end());
            bool check = true;
            for(int j=0;j<n;j++){
                if(v2[j]!=v[j]){
                    check=false;
                    break;
                }
            }
            if(check){
                cout<<i<<endl;
                ans = true;
                break;
            }
        }
        if(!ans)cout<<"-1"<<endl;
    }
    
}