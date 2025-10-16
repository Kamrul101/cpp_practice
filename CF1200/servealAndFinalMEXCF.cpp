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
        int zero = -1;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            if(a[i]==0){ 
                zero = i;
            }
        }
        if(zero==-1){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }
        int x = (n+1)/2;

        vector<pair<int,int>>vp;
        bool check1 = true, check2 = true;
        for(int i=1;i<=x;i++){
            if(a[i]==0) check1 = false;
        }
        for(int i=x+1;i<=n;i++){
            if(a[i]==0) check2 = false;
        }
        int req = n;
        if(!check1 && !check2){
            vp.push_back({1,x});
            vp.push_back({2,n-x+1});
            vp.push_back({1,2});
        }
        else if(check1 && !check2){
            vp.push_back({x+1,n});
            vp.push_back({1,x+1});
        }
        else{
            vp.push_back({1,x});
            vp.push_back({1,n-x+1});
        }
        cout<<vp.size()<<endl;
        for(auto u:vp){
            cout<<u.first<<" "<<u.second<<endl;
        }

        
        
    }
    
}