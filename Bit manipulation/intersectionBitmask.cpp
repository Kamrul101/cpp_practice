/*
Consider this problem: There are N≤5000 workers. Each worker is 
available during some days of this month (which has 30 days). For 
each worker, you are given a set of numbers, each from interval 
[1,30] ,representing his/her availability. You need to assign an 
important project to two workers but they will be able to work 
on the project only when they are both available. Find two workers 
that are best for the job — maximize the number of days when 
both these workers are available.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
const int mx =2e5+123;

void printBinary(int n){
    for(int i=30;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}

int main() {
    optimize();
    int n;
    cin>>n;
    vector<int> masks(n,0);
    for(int i=0;i<n;i++){
        int worker;
        cin>>worker;
        int mask = 0;
        for(int j=0;j<worker;j++){
            int day;
            cin>>day;
            mask = (mask|(1<<day));
        }
        masks[i] = mask;
    }
    // for(int i=0;i<n;i++){
    //     cout<<masks[i]<<endl;
    //     printBinary(masks[i]);
    // }
    int max_days=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cnt=0;
            cnt = __builtin_popcount(masks[i] & masks[j]);
            max_days = max(max_days,cnt);
        }
    }
    cout<<max_days<<endl;

    
}

/*
int main(){
    optimize();
    int n;
    cin >> n;
    vector<bitset<31>> mask(n);
    for(int i=0;i<n;i++){
        int k; 
        cin>>k;
        while(k--){
            int day; 
            cin >> day;
            mask[i] |= (1<<day);
        }
    }
    int max_days = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int cnt = (mask[i] & mask[j]).count();
            max_days = max(max_days, cnt);
        }
    }
    cout << max_days << endl;
}
*/
