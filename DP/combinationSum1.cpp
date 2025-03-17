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

void printSub(int idx,vector<int>&v,vector<vector<int>>&ans,int k,int arr[],int n){
    if (idx == n){
        if(k == 0){
          ans.push_back(v);
        }
        return;
    }
    if(arr[idx] <= k){
        v.push_back(arr[idx]);
        printSub(idx,v,ans,k-arr[idx],arr,n);
        v.pop_back();
    }
    printSub(idx+1,v,ans,k,arr,n);
}

int main() {
    optimize();
    int arr[] = {2,3,6,7};
    vector<int> v;
    vector<vector<int>>ans;
    int n = 4;
    int k=7;
    printSub(0,v,ans,k,arr,n);
    for(auto u:ans){
        for(auto x:u){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}