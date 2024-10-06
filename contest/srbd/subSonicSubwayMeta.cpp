#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
const double eps = 1e-6;

int main() {
    optimize();
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        int n;
        cin >> n;
        ld minV = -1, maxV = INT_MAX;
        for (int i = 1; i <= n; i++) {
            ld x, y;
            cin >> x >> y;
            ld minS = i*1.0/ y;
            ld maxS = i*1.0 / x;
            minV = max(minV, minS);
            maxV = min(maxV, maxS);
        }
        cout<<"Case "<<cs<<": ";
        if(minV<=maxV) cout<<minV<<endl;
        else cout<<-1<<endl;
        
    }

    return 0;
}
