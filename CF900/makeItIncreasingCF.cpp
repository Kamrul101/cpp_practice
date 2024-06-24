#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
const int mx = 2e5 + 123;
ll a[mx];


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ans = false;
            for(int i=n-2;i>=0;i--){
                  while(a[i]>=a[i+1] && a[i]>0){
                    a[i]/=2;
                    cnt++;
                  }
                  if(a[i]==a[i+1]){
                    cout<<-1<<endl;
                    ans = true;
                    break;
                  }
            }
            if(!ans) cout<<cnt<<endl;
       
    }
}