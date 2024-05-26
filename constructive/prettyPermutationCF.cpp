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
        if(n%2==0){
            for(int i=1;i<n;i++){
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
        }
        else{
            cout<<3<<" "<<1<<" "<<2<<" ";
            for(int i=4;i<n;i++){
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
        }
        
        
        cout<<endl;


    }
}
