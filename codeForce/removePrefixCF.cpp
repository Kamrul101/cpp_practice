#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
long long a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        map<int,int>m;
        int len=0;
        for(int i=n;i>0;i--){
            m[a[i]]++;
            if(m[a[i]]>1){
                len=i;
                break;
            }
        }
        cout<<len<<endl;
    }
    
    
}