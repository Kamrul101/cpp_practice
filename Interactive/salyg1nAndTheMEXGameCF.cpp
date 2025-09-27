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
    // optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int>mp;
        int mex = -1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(int i=0;i<n;i++){
            if(v[i]!=i){
                mex = i;
                break;
            }
        }
        if(mex==-1) mex = n;
        while(1){
            cout<<mex<<endl;
            cout<<flush;

            int x;
            cin>>x;
            if(x>=0){
                mex = x;
            }
            else break;
        }
        
    }
    
}