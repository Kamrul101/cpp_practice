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
        string a,b;
        cin>>a>>b;
        int cnt1=0,cnt0=0,f=0;
        vector<pair<int,int>>v;
        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1') cnt1++;
            else cnt0++;
            if(cnt1 == cnt0){
                v.push_back({j,i});
                j=i+1;
            }
        }
        for(auto i : v){
            int start=i.first;
            int end=i.second;
            if(a[start]==b[start]) continue;
            else{
                for(int j=start;j<=end;j++){
                    if(a[j]=='0') a[j]='1';
                    else a[j]='0';
                }
            }
        }
        bool ans = true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cout<<"NO"<<endl;
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;

    }
    
}