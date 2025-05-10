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

/*
You are given a lucky number n. Lucky numbers are the positive 
integers whose decimal representations contain only the lucky 
digits 4 and 7. For example, numbers 47, 744, 4 are lucky 
and 5, 17, 467 are not.
*/
vector<int> generateLuckyNumbers() {
    vector<int> lucky;
    const int MAX = 1e9;
    for (int len = 1; len <= 9; len++) {
        int total = 1 << len;
        for (int mask = 0;mask<total; mask++) {
            long long num = 0;
            for(int i = 0;i<len;i++){
                num = num * 10 + ( (mask&(1<<i)) ? 7 : 4 );
            }
            if(num <= MAX) lucky.push_back((int)num);
        }
    }
    sort(lucky.begin(), lucky.end());
    return lucky;
}
int main() {
    optimize();
    auto a = generateLuckyNumbers();
    int n;
    cin>>n;
    for(int i=0;i<a.size();i++){
        if(n==a[i]) {
            cout<<i+1<<endl;
            break;
        }
    }
    
}