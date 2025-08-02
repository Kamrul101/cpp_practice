#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =52;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mex = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum1=0,i=0,sum=0;
        for(i=0;i<n;i++){
            if(a[i]==0) mex++;
            else break;
        }
        sum+=mex;
        for(int j=i;i<n;i++) sum+=a[i];
        cout<<sum<<endl;
        
    }
    
}