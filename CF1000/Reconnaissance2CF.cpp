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
int main() {
    optimize();
    int n;
    cin>>n;

    int mnI,currI,mn=10001;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])<mn){
                mn=abs(a[i]-a[i+1]);
                currI=i;
                mnI=i+1;   
            }
    }
    if(abs(a[0]-a[n-1])<mn){
        currI=0;
        mnI=n-1;
    }
    cout<<currI+1<<" "<<mnI+1<<endl;
    
}