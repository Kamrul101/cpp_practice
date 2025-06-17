#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
// int a[mx][mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int mxVal = 0,cnt=0;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                mxVal = max(a[i][j],mxVal);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==mxVal){
                    cnt++;
                    a[i][j] = 1;
                }
                else a[i][j] = 0;
            }
        }
        auto rowPref = a, colPref = a;

        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                rowPref[i][j] +=rowPref[i][j-1];
            }
        }
        for(int j=0;j<m;j++){
            for(int i=1;i<n;i++){
                colPref[i][j] +=colPref[i-1][j];
            }
        }
        bool ans = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int rowSum = rowPref[i][m-1];
                int colSum = colPref[n-1][j];
                int total = rowSum + colSum - a[i][j];
                if(total==cnt){
                    cout<<mxVal-1<<endl;
                    ans = true;
                    break;
                }
            }
            if(ans) break;
        }
        if(!ans) cout<<mxVal<<endl;
    }
    
}