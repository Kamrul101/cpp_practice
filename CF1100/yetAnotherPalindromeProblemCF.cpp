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
        vector<int>s;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            s.push_back(a);
        }
        bool ans = false;
        for(int i =0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(s[i]==s[j]){
                    ans = true;
                    break;
                }
                
            }
            if(ans) break;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}