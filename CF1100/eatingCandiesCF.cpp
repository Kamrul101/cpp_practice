#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
ll a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        ll sum1=0,sum2=0;
        int cnt=0;
        int i=0,j=n-1;
        while(i<=j){
            if(sum1<=sum2){
                sum1+=a[i];
                i++;
            }
            else if(sum1>sum2){
                sum2+=a[j];
                j--;
            }
            if(sum1==sum2){
                cnt = i+n-j -1;
            }
           
        }
        cout<<cnt<<endl;
        
    }
    
}