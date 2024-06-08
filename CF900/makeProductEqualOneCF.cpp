#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef long double ld ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 1e5+123;
ll a[mx];
// int dp[mx]={0};


int main() {
    optimize();
    
        int n;
        cin>>n;
        ll cntMinus = 0, prdM=1, cntZero=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                sum+=(-1-a[i]);
                prdM*=-1;
            }
            else if(a[i]>0){
                sum+=(a[i]-1);
                
            }
            else{
                cntZero++;
            }
        }
        
        if(cntZero==0){
            if(prdM==-1) sum+=2;
        }
        else {sum+=cntZero;}
        cout<<sum<<endl;
    
    
    
}
