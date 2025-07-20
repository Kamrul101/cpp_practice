#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>v1,v2;
        v1.push_back(INT_MAX);
        v2.push_back(INT_MAX);
        for(int i=1;i<=n;i++){
            if(a[i]<=min(v1.back(),v2.back())){
                if(v1.back()<=v2.back()){
                    v1.push_back(a[i]);
                }
                else v2.push_back(a[i]);
            }
            else if(a[i]<=max(v1.back(),v2.back())){
                if(a[i]<=v1.back()) v1.push_back(a[i]);
                else v2.push_back(a[i]);
            }
            else{
                if(v1.back()<=v2.back()){
                    v1.push_back(a[i]);
                }
                else v2.push_back(a[i]);
            }
        }

        int ans = 0;
        for(int i=0;i<v1.size()-1;i++){
            if(v1[i]<v1[i+1]) ans++;
        }

        for(int i=0;i<v2.size()-1;i++){
            if(v2[i]<v2[i+1]) ans++;
        }
        cout<<ans<<endl;

        
    }
    
}