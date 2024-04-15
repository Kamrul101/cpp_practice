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
        int cnt1=0,cnt2=0;
        while(n%2==0){
            n/=2;
            cnt1++;
        }
        while(n%3==0){
            n/=3;
            cnt2++;
        }
        if(n==1 && cnt1<=cnt2) cout<<2*cnt2-cnt1<<endl;
        else cout<<"-1"<<endl;
           
        
        

    }

}
