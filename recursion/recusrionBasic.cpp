#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e5+123;
// int a[mx];

//tail recursion
void fun1(int n){
    if(n>0){
        cout<<n<<" ";
        fun1(n-1);
    }
}
//head recursion
void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<n<<" ";
    }
}
//tail recursion
int fun3(int n){
    if(n>0){
        return fun3(n-1)+n;   
    }
    return 0;
}
//static
int fun4(int n){
    static int x = 0;
    if(n>0){
        x++;
        return fun4(n-1)+x;   
    }
    return 0;
}
//tree recursion
void fun5(int n){
    
    if(n>0){
        
        cout<<n<<" ";
        fun5(n-1); 
        fun5(n-1); 
    }
    
    
}

int main() {
    optimize();
    fun5(3); 
}
