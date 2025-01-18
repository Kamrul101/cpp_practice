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
vector<string> v;
bool comp(int x, int y) {
    if (x < y) {
        return v[x][y] == '1';
    }
    return v[y][x] == '0';
}
int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        v.resize(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }
        vector<int>a(n);
        for (int i=0;i<n;i++) {
            a[i]=i;
        }
        sort(a.begin(),a.end(),comp);
        for (int i = 0; i < n; i++) {
            cout<<a[i]+1<<" ";
        }
        cout<<endl;
    }
}
