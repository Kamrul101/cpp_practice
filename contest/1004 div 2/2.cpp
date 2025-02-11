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
        vector<int> v(n+1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[x]++;
        }

        bool ans = true;
        for(int i=1;i<n;i++){
            if(v[i]==1){
                cout<<"NO"<<endl;
                ans = false;
                break;
            }
            else{
                if(v[i]>2){
                    v[i+1]+= (v[i]-2);
                    v[i]=2;
                }
            }
        }
        if(ans){
            for(int i=1;i<=n;i++){
                if(v[i]%2){
                    cout<<"NO"<<endl;
                    ans = false;
                    break;
                }
            }
            if(ans) cout<<"YES"<<endl;
        }
        
    }
    
}