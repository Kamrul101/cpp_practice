#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;
int a[mx];
int main() {
    optimize();

    int n,k;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>k;
    multiset<int> s;
    for(int i=0;i<k;i++) s.insert(a[i]);
    for(int i=0;i<n-k+1;i++){
        cout<<*s.rbegin()<<" ";
        s.erase(s.find(a[i]));
        if(i+k<n) s.insert(a[i+k]);
    }
    cout<<endl;

}