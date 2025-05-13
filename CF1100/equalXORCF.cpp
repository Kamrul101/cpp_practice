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
        int n,k;
        cin>>n>>k;
        map<int,int>mp1;
        for(int i=1;i<=n;i++) mp1[i]=0;
        for(int i=1;i<=2*n;i++){
            int x;
            cin>>x;
            if(i<=n)mp1[x]++;
        }
        vector<int> v0,v1,v2;
        for(auto u:mp1){
            if(u.second==2) v2.push_back(u.first);
            else if(u.second==0) v0.push_back(u.first);
            else v1.push_back(u.first);
        }
        int cnt=0;
        for(auto u:v2){
            if(cnt<2*k){
                cout<<u<<" "<<u<<" ";
                cnt+=2;
            }
        }
        for(auto u:v1){
            if(cnt<2*k){
                cout<<u<<" ";
                cnt++;
            }
        }
        cout<<endl;
        cnt=0;
        for(auto u:v0){
            if(cnt<2*k){
                cout<<u<<" "<<u<<" ";
                cnt+=2;
            }
        }
        for(auto u:v1){
            if(cnt<2*k){
                cout<<u<<" ";
                cnt++;
            }
        }
        cout<<endl;
        
    }
    
}