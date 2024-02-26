#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    optimize();
    int t;
    cin >> t;
    
    vector<int> v(200010);
        int totalSum = 0;
        for (int i = 1; i <= 200010; i++) {
        int sum = 0;
            int num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            
           v[i] = v[i-1]+sum;
            
        }
    while (t--) {
        
        int n;
        cin >> n;
        
        cout << v[n] << '\n';
    }
    return 0;
}
