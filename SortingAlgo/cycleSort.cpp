#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
// const int mx = 2e5 + 123;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
int cycleSort(int a[],int l){
    int i=0;
    while(i<l){
        int c = a[i]-1;
        if(a[i] > 0 && a[i] <= l && a[i] != a[a[i] - 1]){
            swap(&a[i],&a[c]);
        }
        else{ i++;}
    }
}
 
int main()
{
    optimize();
    int a[] = {2147483647,2147483646,2147483645,3,2,1,-1,0,-2147483648};
    cycleSort(a,8);
    for(int i=0;i<8;i++) cout<<a[i]<<" ";
}