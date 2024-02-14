#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    optimize();
    int k;
    cin>>k;
    vector<int>nums={1,2,3,4,5,6,7};
    int l = nums.size();
    k%=l;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        for(auto u:nums){
            cout<<u<<" ";
        }
}