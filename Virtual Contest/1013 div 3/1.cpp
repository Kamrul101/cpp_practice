#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx = 25;
int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt0=0,cnt1=0,cnt3=0,cnt5=0,cnt2=0;
        bool ans = false;
        for(int i=0;i<n;i++){
            if(cnt0==3 && cnt1==1 && cnt2==2 && cnt3==1 && cnt5==1){
                cout<<i<<endl;
                ans = true;
                break;
            }
            if(a[i]==0 && cnt0<3) cnt0++;
            else if(a[i]==1 && cnt1<1) cnt1++;
            else if(a[i]==2 && cnt2<2) cnt2++;
            else if(a[i]==3 && cnt3<1) cnt3++;
            else if(a[i]==5 && cnt5<1) cnt5++;
        }
        if(!ans) {
            if(cnt0==3 && cnt1==1 && cnt2==2 && cnt3==1 && cnt5==1){
                cout<<n<<endl;
            }
            else cout<<0<<endl;
        }
        
    }
    
}