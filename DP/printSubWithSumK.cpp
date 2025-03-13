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

void printSub(int idx,vector<int>&v,int sum, int k,int arr[],int n){
    if(idx==n){
        if(sum==k){
            for(auto u:v){
                cout<<u<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //pick into the subsequence
    v.push_back(arr[idx]);
    sum+=arr[idx];
    printSub(idx+1,v,sum,k,arr,n);

    sum-=arr[idx];
    v.pop_back();
    //not pick into subsequence
    printSub(idx+1,v,sum,k,arr,n);
}

int main() {
    optimize();
    int arr[] = {1,2,1};
    vector<int> v;
    int n = 3;
    int k=2;
    printSub(0,v,0,k,arr,n);
}