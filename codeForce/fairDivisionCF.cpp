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
        int one = 0, two=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1) one++;
            else two++;
        } 
        if(sum%2) cout<<"NO"<<endl;
        else{
            sum/=2;
            if(sum%2 == 0 || (sum%2==1 && one!=0)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}
