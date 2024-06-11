#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 5e5 + 123;
ll preSum[mx];

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int mnH = INT_MAX, mxH=-1;
        int mnK = INT_MAX, mxK=-1;
        char v[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                if(v[i][j]=='#'){
                    mnH = min(mnH,i);
                    mxH = max(mxH,i);
                    mnK = min(mnK,j);
                    mxK = max(mxK,j);
                }
            }
        }

        int cH = (mnH+mxH)/2;
        int cK = (mnK+mxK)/2;

        cout<<cH+1<< " "<<cK+1<<endl;

    }
}
