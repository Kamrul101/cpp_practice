#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];
void fun1(int n){
    if(n>0){
        cout<<n<<" ";
        fun1(n-1);
    }
}

int main() {
    optimize();
    fun1(5); 
}
