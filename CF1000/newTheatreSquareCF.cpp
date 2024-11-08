#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
char a[102][1002];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        int cnt2=0,cnt1=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(a[i][j]=='.'){
                    cnt1++;
                    c++;
                    if(c==2){
                        cnt2++;
                        c=0;
                    }
                }
                else{
                    c=0;
                }
            }
            if(c==2) cnt2++,c=0;
            c=0;
        }
        int ans1 = 0,ans2=0;
        
            ans1+=cnt2*y;
            ans1+= (cnt1 - cnt2*2) * x;
        
         ans2+=cnt1*x;
        cout<<min(ans1,ans2)<<endl;
    }
    
}