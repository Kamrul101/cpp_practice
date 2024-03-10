#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// const int mx = 2e6+123;
// long long a[mx];

int main() {
    optimize();
    
    int t;
    cin>>t;
    while (t--)
    {
        int buns,patti,kut,pHam, pChi;
    cin>>buns>>patti>>kut>>pHam>> pChi;
    int mxP,mnP,mxPatti,mnPatti;
    if(pHam>pChi){
        mxP = pHam;
        mxPatti = patti;

        mnP = pChi;
        mnPatti = kut;
    }
    else {
        mxP = pChi;
        mxPatti = kut;

        mnP = pHam;
        mnPatti = patti;
    }
    int burger = buns /2;
    int profit = 0;

    if(burger<= mxPatti){
        profit += (burger*mxP);
        burger = 0;
    }
    else{
        burger -= mxPatti;
        profit+=(mxP*mxPatti); 
    }
    if(burger<= mnPatti){
        profit+=(burger*mnP);
        burger = 0;
    }
    else{
        profit+=(mnP * mnPatti);
    }
    cout<<profit<<endl;
    }
    
}