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
        int n;
        cin>>n;
        set<int> used;
		for(int i=2;i*i<=n;i++) {
			if(n%i==0){
				used.insert(i);
				n/= i;
				break;
			}
		}
		for(int i=2;i*i<=n;i++) {
			if(n%i==0 && !used.count(i)) {
				used.insert(i);
				n/=i;
				break;
			}
		}
        if((int)used.size()<2 || used.count(n) || n==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            used.insert(n);
            for(auto u:used) cout<<u<<" ";
            cout<<endl;
        }
        
    }
    
}