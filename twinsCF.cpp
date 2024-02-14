#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    int n,sum = 0,sum2=0,count=0;
    cin>>n;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    sum/=2;
    sort(v.rbegin(),v.rend());

    for(auto u :v){
        sum2 +=u;
        count++;
        if(sum<sum2){
            break;
        }
    }
    cout<<count<<endl;
}