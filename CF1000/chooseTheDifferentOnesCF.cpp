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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a,b;
        map<int,int> mpA,mpB;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=k) {
                a.push_back(x);
                mpA[x]++;
            }
        }
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x<=k) {
                b.push_back(x);
                mpB[x]++;
            }
        }
        int cntA=0,cntB=0,cntS=0;
        bool ans = true;
        for(int i=1;i<=k;i++){
            if(mpA[i]==0 && mpB[i]==0){
                cout<<"NO"<<endl;
                ans = false;
                break;
            }
            if(mpA[i]>0 && mpB[i]==0) cntA++;
            else if(mpA[i]==0 && mpB[i]>0) cntB++;
            else if(mpA[i]>0 && mpB[i]>0) cntS++; 
        }
        if(ans){
            if(cntS<=k && cntA<=k/2 && cntB<=k/2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    
}