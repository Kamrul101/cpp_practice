#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
const int mx = 2e5+123;
int a[mx];
// ll preSum[mx];


int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int preSum = 0;
        int mx = 0;
        int last = -1;
        map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < n; i++)
        {
            preSum += a[i];
            if(mp.find(preSum) != mp.end()){
                int pre = mp[preSum];
                if(pre>=last){
                    mx++;
                    last = i;
                }
            }
            mp[preSum] = i;
        }
        cout<<mx<<endl;
    }
    
}
