#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =41;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<pair<int,int>> vp;
        bool flag;
        for(int i=0;i<n-1;i++){
            flag = false;
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    vp.push_back({1,j+1});
                    flag = true;
                }
            }
            if(flag==false) break;
        }
        for(int i=0;i<n-1;i++){
            flag = false;
            for(int j=0;j<n-i-1;j++){
                if(b[j]>b[j+1]){
                    swap(b[j],b[j+1]);
                    vp.push_back({2,j+1});
                    flag = true;
                }
            }
            if(flag==false) break;
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
                vp.push_back({3,i+1});

            }
        }
        cout<<vp.size()<<endl;
        for(auto u:vp){
            cout<<u.first<<" "<<u.second<<endl;
        }
        
    }
    
}