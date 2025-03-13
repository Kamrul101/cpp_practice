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

void printSub(int idx,vector<int>&v,int arr[],int n){
    if(idx==n){
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;
        return;
    }
    //pick into the subsequence
    v.push_back(arr[idx]);
    printSub(idx+1,v,arr,n);
    v.pop_back();
    //not pick into subsequence
    printSub(idx+1,v,arr,n);
}

int main() {
    optimize();
    int arr[] = {3,1,2};
    vector<int> v;
    int n = 3;
    printSub(0,v,arr,n);
}