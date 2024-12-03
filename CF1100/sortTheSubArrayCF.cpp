#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx],b[mx];
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int l = -1, r = -1;
		for(int j = 0; j < n; j++)
		{
			if(a[j] != b[j])
			{
				r = j;
				if(l == -1) l = j;
			}
		}
        while(l>0 && b[l-1]<=b[l]) l--;
        while(r<n-1 && b[r]<=b[r+1]) r++;
        cout<<l+1<<" "<<r+1<<endl;
    }
    
}