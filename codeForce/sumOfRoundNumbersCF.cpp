#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    int t;
    cin >> t;
    while(t--){
        set<long long> s;
        long long n;
        cin >> n;
        long long i = 1;
        while(n != 0){
            long long rem = n % 10;
            long long val = rem * i; // Corrected this line
            n /= 10;
            i*=10;
            s.insert(val);
        }
        if(s.count(0) == 1) s.erase(0);
        cout<<s.size()<<endl;
        for(auto u : s){
            cout << u << " ";
        }
        cout << endl;
    }
    
}
