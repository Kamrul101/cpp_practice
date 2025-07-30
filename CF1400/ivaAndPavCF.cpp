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
int v[mx][30];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<30;j++){
                if(a[i]&(1<<j)){
                    v[i+1][j] = v[i][j]+1;
                }
                else v[i+1][j] = v[i][j];
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l,k;
            cin>>l>>k;
            if(a[l-1]<k){
                cout<<-1<<" ";
                continue;
            }
            int lo=l ,hi = n;
            int ans = l;
            while(lo<=hi){
                int mid = lo+(hi-lo)/2;
                int num = 0;
                for(int j=0;j<30;j++){
                    if(v[mid][j]-v[l-1][j]==mid-l+1){
                        num+=(1<<j);
                    }
                }
                if(num>=k){
                    lo = mid+1;
                    ans = max(ans,mid);
                }
                else hi = mid -1;
            }
            cout<<ans<<" ";

        }
        cout<<endl;
        
    }
    
}