#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            if(a[i]%2==0) v1.push_back(a[i]);
        }
        for(int i=1;i<=n;i++) {
            if(a[i]%2!=0) v1.push_back(a[i]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(v1[i],2*v1[j])>1){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        
    }
}
