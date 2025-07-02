#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =203;
int a[mx][mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                cin>>a[i][j];
            }
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(a[i][0]<=k && k<=a[i][m-1]){
                int l=0,h=m-1;
                bool check = false;
                while(l<=h){
                    int mid = (l+h)/2;
                    if(a[i][mid]==k){
                        ans = a[i][mid];
                        check = true;
                        break;
                    }
                    else if(k>a[i][mid]){
                        l = mid + 1;
                    }
                    else h= mid -1;
                }
                if(check) break;
            }
        }
        cout<<ans<<endl;
        
    }
    
}