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
    
    int a, b;
    cin >> a >> b;

    int low = 0;
    int high = min(min(a, b), (a + b) / 4);

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid <= a && mid <= b && 4 * mid <= a + b) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << high << endl;
    }
    
}