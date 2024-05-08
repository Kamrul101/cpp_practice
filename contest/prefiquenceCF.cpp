#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
// int b[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string a,b;
        cin>>a>>b;
        int i=0,j=0;
        while(i<m && j<n){
            if(a[i]==b[j]) i++;
            j++;
        }
        cout<<i<<endl;
        

    }
}
