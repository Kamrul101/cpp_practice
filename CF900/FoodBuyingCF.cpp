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
        int s,rem=0,temp,ans=0;
        cin>>s;
        
        while(1){
            temp=(s/10)*10;
            ans+=temp;
            rem = s - temp;
            s= (s/10)+rem;
            if(s<10){
                ans+=s;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
