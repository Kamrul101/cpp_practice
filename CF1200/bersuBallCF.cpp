#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =101;
int a[mx],b[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>b[i];
        
    }
    sort(a,a+n);
    sort(b,b+m);
    int cnt=0,j=0;
    for(int i=0;i<n&&j<m;){
        if(abs(a[i]-b[j])<=1){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]>b[j]) j++;
        else i++;
    }
    cout<<cnt<<endl;

    
}