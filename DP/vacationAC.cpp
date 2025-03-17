#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =1e5+123;
int a[mx][3],dp[mx][3];
int solve(int day, int lastDay){
    if(day==0){
        int mx = 0;
        for(int i=0;i<3;i++){
            if(i!=lastDay){
                mx = max(mx,a[0][i]);
            }
        }
        return mx;
    }
    if(dp[day][lastDay]!=-1) return dp[day][lastDay];
    int mx = 0;
    for(int i=0;i<3;i++){
        if(i!=lastDay){
            int point = a[day][i] + solve(day-1,i);
            mx = max(mx,point);
        }
    }
    return dp[day][lastDay]= mx;
}
int main() {
    optimize();
    int n;
    cin>>n;
    mem(dp,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<solve(n-1,3)<<endl;
    
}