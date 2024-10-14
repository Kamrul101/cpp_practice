#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        int h = 0,tot=0,sum=0;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(x%2==0) h+=x;
            else {
                h+=x-1;
                x=1;
                tot+=x;
                v.push_back(x);
            }
        }

        int rem,cnt;
        cnt = h/2;
        if(tot%2==0){
            cnt+=tot/2;
            rem = k - cnt;
            h +=2*rem;
        }
        else{
            cnt+=(tot-1)/2;
            cnt++;
            h++;
            rem = k - cnt;
            h+=2*rem;
        }
        cout<<min(sum,h)<<endl;
    }
    
}