#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];


int main() {
    optimize();
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<12;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    int sum=0,month=0;
    bool ans = false;

    if(n==0) {
        cout<<'0'<<endl;
        ans = true;
    }
    else if(n>0){
        for(int i=0;i<12;i++){
            sum+=v[i];
            month++;
            if(sum>=n){
                cout<<month<<endl;
                ans=true;
                break;
            }
        }
    }
    if(!ans) cout<<-1<<endl;

    


}
