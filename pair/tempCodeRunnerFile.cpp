#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int t;
    cin>>t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 3 == 0) {
            cout << '0' << endl;
        } else if (sum % 3 == 2) {
            cout << '1' << endl;
        } else {
            bool found = false;
            for (int i = n; i>0; i--) {
                int temp = sum - a[i];
                if (temp % 3 == 1) {
                    cout << '1' << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << '2' << endl;
            }
        }
    }
    
}
