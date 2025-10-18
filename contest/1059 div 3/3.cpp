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
        int a,b;
        cin>>a>>b;
        vector<int> v1(31,0),v2(31,0),v;
        for(int i=30;i>=0;i--){
            v1[i]=((a>>i)&1);
        }
        for(int i=30;i>=0;i--){
            v2[i]=((b>>i)&1);
        }
        bool check = true;
        for(int i=0;i<31;i++){
            if(v1[i]!=v2[i]){
                if((1<<i)>a){
                    check = false;
                    break;
                }
                v.push_back(1<<i);
            }
        }
        if(!check){ 
            cout<<-1<<endl;
            continue;
        }
        cout<<v.size()<<endl;
        for(auto u:v) cout<<u<<" \n"[u==v.back()];
    }
    
}