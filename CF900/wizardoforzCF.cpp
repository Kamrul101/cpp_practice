#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];

int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = "989";
        if(n<=3){
            for(int i=0;i<n;i++){
                cout<<s[i];
            }
        }
        else{
            cout<<s;
            for(int i=4;i<=n;i++){
                cout<<(i-4)%10;
            }
        }
        cout<<endl;
    }
    
}
